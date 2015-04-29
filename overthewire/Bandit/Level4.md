## Bandit Level 4 -> Level 5

## Level Goal

The password for the next level is stored in the only human-readable file in the inhere directory. Tip: if your terminal is messed up, try the “reset” command.

## Commands you may need to solve this level

ls, cd, cat, file, du, find

## Solution

```
bandit4@melinda:~$ ls
inhere
bandit4@melinda:~$ cd inhere/
bandit4@melinda:~/inhere$ file ./-file00
./-file00: data
bandit4@melinda:~/inhere$ ls -a
-file00  -file01  -file02  -file03  -file04  -file05  -file06  -file07  -file08  -file09  .  ..
bandit4@melinda:~/inhere$ cat ./-file07
koReBOKuIDDepwhWk7jZC0RTdopnAYKh
```

