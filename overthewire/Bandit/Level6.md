## Bandit Level 6 -> Level 7

## Level Goal

The password for the next level is stored somewhere on the server and has all of the following properties: - owned by user bandit7 - owned by group bandit6 - 33 bytes in size

## Commands you may need to solve this level

ls, cd, cat, file, du, find, grep

## Solution

```
bandit6@melinda:~$ find / -type f -user bandit7 -group bandit6 -size 33c 2>/dev/null -exec cat {} \;
HKBPTKQnIay4Fw76bEy8PVxKEDQRKTzs
```

At first I try to find the file in home folder but failed
Then I found in Level Goal that the file may occur anywhere
so I use "find /", and "-type -user -group -size" are parameters
as for "2>/dev/null", it means the error messages are sent to /dev/null, in other words, we won't see any error message
"-exec cat {} \'"means, if somefile found, show its content

## Reference

http://hackmethod.com/overthewire-bandit-7/

