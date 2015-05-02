## Bandit Level 11 -> Level 12

## Level Goal

The password for the next level is stored in the file data.txt, where all lowercase (a-z) and uppercase (A-Z) letters have been rotated by 13 positions

##Commands you may need to solve this level

grep, sort, uniq, strings, base64, tr, tar, gzip, bzip2, xxd

##Helpful Reading Material

1. [Rot13 on Wikipedia](http://en.wikipedia.org/wiki/Rot13)

## Solution

```
bandit11@melinda:~$ cat data.txt | tr 'a-m n-z A-M N-Z' 'n-z a-m N-Z A-M'
The password is 5Te8Y4drgCRfCx8ugdwuEX8KFC6k2EUu
```

I made a mistake that I convert letters to lower characters like this:
'cat data.txt | tr [A-Z] [a-z] | tr "abcdefghijklmnopqrstuvwxyz" "nopqrstuvwxyzabcdefghijklm"'
