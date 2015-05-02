## Bandit Level 15 -> Level 16

## Level Goal

The password for the next level can be retrieved by submitting the password of the current level to port 30001 on localhost using SSL encryption.

Helpful note: Getting “HEARTBEATING” and “Read R BLOCK”? Use -quiet and read the “CONNECTED COMMANDS” section in the manpage. Next to ‘R’ and ‘Q’, the ‘B’ command also works in this version of that command…

## Commands you may need to solve this level

ssh, telnet, nc, openssl, s_client, nmap

## Helpful Reading Material

1. [Secure Socket Layer/Transport Layer Security on Wikipedia](http://en.wikipedia.org/wiki/Secure_Socket_Layer)
2. [Testing SSL with commandline tools(https://web.archive.org/web/20070512053927/http://advosys.ca/viewpoints/2006/08/testing-ssl-with-command-line-tools/)

## Solution

Passing this level need to know the usage of s_client of command openssl.
and option -quiet dont print session and ca, meanwhile -ign_eof is opened to be connected when the output reach eof

```
bandit15@melinda:~$ openssl s_client -connect localhost:30001 -quiet
depth=0 CN = li190-250.members.linode.com
verify error:num=18:self signed certificate
verify return:1
depth=0 CN = li190-250.members.linode.com
verify return:1
BfMYroe26WYalil77FoDi9qh59eK5xNr
Correct!
cluFn7wTiGryunymYOu4RcffSxQluehd

read:errno=0
```

