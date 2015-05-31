
## Bandit Level 25 -> Level 26

## Level Goal

Logging in to bandit26 from bandit25 should be fairly easy… The shell for user bandit26 is not /bin/bash, but something else. Find out what it is, how it works and how to break out of it.

## Commands you may need to solve this level

ssh, cat, more, vi, ls, id, pwd

## Solution

I ssh to logged in bandit26,then see something strange,and logged out automamaticly.
After having a look at the shell for bandit26, I know command `more` is used.
So there is a trick to get the password by using vi.(refering Nikkko)

```
bandit25@melinda:~$ ls
bandit26.sshkey                                                                                   
bandit25@melinda:~$ ssh -i bandit26.sshkey bandit26@localhost                                     
Could not create directory '/home/bandit25/.ssh'.                                                 
The authenticity of host 'localhost (127.0.0.1)' can't be established.                            
ECDSA key fingerprint is 05:3a:1c:25:35:0a:ed:2f:cd:87:1c:f6:fe:69:e4:f6.                         
Are you sure you want to continue connecting (yes/no)? yes                                        
(...)
  _                     _ _ _   ___   __  
 | |                   | (_) | |__ \ / /  
 | |__   __ _ _ __   __| |_| |_   ) / /_  
 | '_ \ / _` | '_ \ / _` | | __| / / '_ \ 
 | |_) | (_| | | | | (_| | | |_ / /| (_) |
 |_.__/ \__,_|_| |_|\__,_|_|\__|____\___/ 
Connection to localhost closed.

bandit25@melinda:~$ cat /etc/passwd | grep bandit26
bandit26:x:11026:11026:bandit level 26:/home/bandit26:/usr/bin/showtext
bandit25@melinda:~$ cat /usr/bin/showtext 
#!/bin/sh
more ~/text.txt
exit 0

bandit25@melinda:~$ ssh -i bandit26.sshkey bandit26@localhost
Step1   before exec the command above the size of terminal should be small enough(util you can see 5 line)
Step2   ssh to localhost
Step3   type 'v' to enter vi
Step4   type ':r /etc/bandit_pass/bandit26' to show the password on screen
Step5   That's all
```

the password is 5czgV9L3Xx8JPOyRbXh6lQbmIOWvPT6Z