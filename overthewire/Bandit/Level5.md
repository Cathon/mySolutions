## Bandit Level 5 -> Level 6

## Level Goal

The password for the next level is stored in a file somewhere under the inhere directory and has all of the following properties: - human-readable - 1033 bytes in size - not executable

## Commands you may need to solve this level

ls, cd, cat, file, du, find


## Solution

```
bandit5@melinda:~$ ls
inhere
bandit5@melinda:~$ cd inhere/
bandit5@melinda:~/inhere$ ls
maybehere00  maybehere03  maybehere06  maybehere09  maybehere12  maybehere15  maybehere18
maybehere01  maybehere04  maybehere07  maybehere10  maybehere13  maybehere16  maybehere19
maybehere02  maybehere05  maybehere08  maybehere11  maybehere14  maybehere17
ndit5@melinda:~/inhere$ find . -type f -size 1033c -exec cat {} \;
DXjZPULLxYr17uwoI01bNLQbtFemEgo7
```

