## Bandit Level 0

## Level Goal

The goal of this level is for you to log into the game using SSH. The host to which you need to connect is bandit.labs.overthewire.org. The username is bandit0 and the password is bandit0. Once logged in, go to the Level 1 page to find out how to beat Level 1.

## Commands you may need to solve this level

ssh

## Helpful Reading Material

1. [Secure Shell (SSH) on Wikipedia](http://en.wikipedia.org/wiki/Secure_Shell)
2. [How to use SSH on wikiHow](http://www.wikihow.com/Use-SSH)


## Bandit Level 0 → Level 1

## Level Goal

The password for the next level is stored in a file called readme located in the home directory. Use this password to log into bandit1 using SSH. Whenever you find a password for a level, use SSH to log into that level and continue the game.

## Commands you may need to solve this level

ls, cd, cat, file, du, find


## Solution

I'm using linux, so I open a shell to use ssh.  
`$ ssh bandit0@bandit.labs.overthewire.org`
Enter "bandit0" as the password  
use 'ls' to show files in the directory, and I find a file named readme  
`$ cat readme`
I get a string "boJ9jbbUNNfktd78OOpsqOltutMc3MY1"  
so I get it as password for next level  

