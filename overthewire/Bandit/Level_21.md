## Bandit Level 21 -> Level 22

## Level Goal

A program is running automatically at regular intervals from cron, the time-based job scheduler. Look in /etc/cron.d/ for the configuration and see what command is being executed.

## Commands you may need to solve this level

cron, crontab, crontab(5) (use "man 5 crontab" to access this)

## Solution

```
bandit21@melinda:~$ cd /etc/cron.d/
bandit21@melinda:/etc/cron.d$ ls
behemoth4_cleanup  cronjob_bandit24       melinda-stats          natas26_cleanup  semtex0-64   vortex0
cron-apt           cronjob_bandit24_root  natas-session-toucher  natas27_cleanup  semtex0-ppc  vortex20
cronjob_bandit22   leviathan5_cleanup     natas-stats            php5             semtex5
cronjob_bandit23   manpage3_resetpw_job   natas25_cleanup        semtex0-32       sysstat

bandit21@melinda:/etc/cron.d$ cat cronjob_bandit22
* * * * * bandit22 /usr/bin/cronjob_bandit22.sh &> /dev/null
bandit21@melinda:/etc/cron.d$ cat /usr/bin/cronjob_bandit22.sh 
#!/bin/bash
chmod 644 /tmp/t7O6lds9S0RqQh9aMcz6ShpAoZKF7fgv
cat /etc/bandit_pass/bandit22 > /tmp/t7O6lds9S0RqQh9aMcz6ShpAoZKF7fgv

bandit21@melinda:/etc/cron.d$ cat /tmp/t7O6lds9S0RqQh9aMcz6ShpAoZKF7fgv
Yk7owGAcWjwMVRwrTesJEwB7WVOiILLI
```

## Reference

http://hackmethod.com/overthewire-bandit-22-3/
