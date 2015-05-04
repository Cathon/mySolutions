## Bandit Level 17 -> Level 18

## Level Goal

There are 2 files in the homedirectory: passwords.old and passwords.new. The password for the next level is in passwords.new and is the only line that has been changed between passwords.old and passwords.new

NOTE: if you have solved this level and see ‘'byebye!' when trying to log into bandit18, this is related to the next level, bandit19

## Commands you may need to solve this level

cat, grep, ls, diff

## Solution

1. use diff

```
bandit17@melinda:~$ ls
passwords.new  passwords.old
bandit17@melinda:~$ diff passwords.new passwords.old 
42c42                                                                                                                                                
< kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
---
> BS8bqB1kqkinKJjuxL6k072Qq9NRwQpR
```

2. use grep (from web)

```
grep -wvf passwords.old passwords.new
```

the password is kfBf3eYk5BPBRzwjqutbbfE887SVc5Yd
