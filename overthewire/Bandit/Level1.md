## Bandit Level 1 → Level 2

## Level Goal

The password for the next level is stored in a file called - located in the home directory
Commands you may need to solve this level

ls, cd, cat, file, du, find

## Helpful Reading Material

1. [Google Search for "dashed filename"](https://www.google.com/search?q=dashed+filename)
2. [Advanced Bash-scripting Guide - Chapter 3 - Special Characters](http://tldp.org/LDP/abs/html/special-chars.html)


## Solution

Log in using password got in Level0  
find a file named "-" in the directory  
`$ cat ./-`
CV1DtqXWVFXTvM2F0k09SHz0YwRINYA9  
`cat -`is not available because '-' is a special character


