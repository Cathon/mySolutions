## Bandit Level 22 -> Level 23

## Level Goal

A program is running automatically at regular intervals from cron, the time-based job scheduler. Look in /etc/cron.d/ for the configuration and see what command is being executed.

NOTE: Looking at shell scripts written by other people is a very useful skill. The script for this level is intentionally made easy to read. If you are having problems understanding what it does, try executing it to see the debug information it prints.

## Commands you may need to solve this level

cron, crontab, crontab(5) (use “man 5 crontab” to access this)

## Solution

```
bandit22@melinda:~$ cd /etc/cron.d
bandit22@melinda:/etc/cron.d$ ls
behemoth4_cleanup  cronjob_bandit24       melinda-stats          natas26_cleanup  semtex0-64   vortex0
cron-apt           cronjob_bandit24_root  natas-session-toucher  natas27_cleanup  semtex0-ppc  vortex20
cronjob_bandit22   leviathan5_cleanup     natas-stats            php5             semtex5
cronjob_bandit23   manpage3_resetpw_job   natas25_cleanup        semtex0-32       sysstat
bandit22@melinda:/etc/cron.d$ cat cronjob_bandit23
* * * * * bandit23 /usr/bin/cronjob_bandit23.sh  &> /dev/null
bandit22@melinda:/etc/cron.d$ cat /usr/bin/cronjob_bandit23.sh
#!/bin/bash

myname=$(whoami)
mytarget=$(echo I am user $myname | md5sum | cut -d ' ' -f 1)

echo "Copying passwordfile /etc/bandit_pass/$myname to /tmp/$mytarget"

cat /etc/bandit_pass/$myname > /tmp/$mytarget
bandit22@melinda:/etc/cron.d$ echo I am user $(whoami) | md5sum | cut -d ' ' -f 1
8169b67bd894ddbb4412f91573b38db3
bandit22@melinda:/etc/cron.d$ cat /tmp/8169b67bd894ddbb4412f91573b38db3
jc1udXuA1tiHqjIsL8yaapX5XIAI6i0n
```

