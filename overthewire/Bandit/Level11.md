## Bandit Level 11 -> Level 12

## Level Goal

The password for the next level is stored in the file data.txt, where all lowercase (a-z) and uppercase (A-Z) letters have been rotated by 13 positions

##Commands you may need to solve this level

grep, sort, uniq, strings, base64, tr, tar, gzip, bzip2, xxd

##Helpful Reading Material

1. [Rot13 on Wikipedia](http://en.wikipedia.org/wiki/Rot13)

## Solution

```
bandit11@melinda:~$ cat data.txt | tr [A-Z] [a-z] | tr "abcdefghijklmnopqrstuvwxyz" "nopqrstuvwxyzabcdefghijklm"
the password is 5te8y4drgcrfcx8ugdwuex8kfc6k2euu
```

A better solution is excepted
