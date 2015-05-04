## Bandit Level 19 -> Level 20

## Level Goal

To gain access to the next level, you should use the setuid binary in the homedirectory. Execute it without arguments to find out how to use it. The password for this level can be found in the usual place (/etc/bandit_pass), after you have used to setuid binary.

## Helpful Reading Material

1. [setuid on Wikipedia](http://en.wikipedia.org/wiki/Setuid)

## Solution

```
bandit19@melinda:~$ ./bandit20-do cat /etc/bandit_pass/bandit20
GbKksEFF4yrVs6il55v6gwY5aVje5f0j
```

## Explaination

这一关涉及到的是linux权限的相关知识。/etc/bandit_pass/bandit20的所有者为bandit20，而其权限设置使得只有自身和bandit20这个group的成员能够读取。

setuid这个文件的拥有者为bandit20，而bandit19，也就是当前登录用户有执行的权限。
而该文件有s权限，即setuid权限，能够在程序中调用setuid()系统调用，将自身的suid改成与euid相同，也就是在运行中作为bandit20执行命令。

对于手头的这个文件，只要将欲执行的命令作为参数传入即可。
这样的文件如果能够通过一定方式执行命令甚至于获得shell，是渗透人员理想的提升权限途径。

from http://blog.csdn.net/winkar/article/details/38408873

