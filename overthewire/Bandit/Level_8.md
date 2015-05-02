## Bandit Level 8 -> Level 9

## Level Goal

The password for the next level is stored in the file data.txt and is the only line of text that occurs only once
Commands you may need to solve this level

grep, sort, uniq, strings, base64, tr, tar, gzip, bzip2, xxd

## Helpful Reading Material

1. [The unix commandline: pipes and redirects](http://www.westwind.com/reference/os-x/commandline/pipes.html)

## Solution

```
bandit8@melinda:~$ ls
data.txt
bandit8@melinda:~$ sort data.txt | uniq -u
UsvVyFSfZZWbi6wgC7dAFyFuR6jQQUhR
```

