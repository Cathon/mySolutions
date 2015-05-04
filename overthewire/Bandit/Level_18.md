## Bandit Level 18 -> Level 19

## Level Goal

The password for the next level is stored in a file readme in the homedirectory. Unfortunately, someone has modified .bashrc to log you out when you log in with SSH.

## Commands you may need to solve this level

ssh, ls, cat

## Solution

1. `ssh -p $port $user@$ip "cmd"`

```
$ ssh bandit18@banfit.labs.overthewire.org "cat readme"
bandit18@banfit.labs.overthewire.orgs password:
IueksS7Ubh8G3DCwVzrTd8rAVOwq3M5x
```

2. using scp to avoid shell

```
$ scp bandit18@bandit.labs.overthewire.org:.~/readme ./readme
```

## Reference

[](http://blog.csdn.net/hzhsan/article/details/12610685)
