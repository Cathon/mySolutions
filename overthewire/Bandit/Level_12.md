## Bandit Level 12 -> Level 13

## Level Goal

The password for the next level is stored in the file data.txt, which is a hexdump of a file that has been repeatedly compressed. For this level it may be useful to create a directory under /tmp in which you can work using mkdir. For example: mkdir /tmp/myname123. Then copy the datafile using cp, and rename it using mv (read the manpages!)

## Commands you may need to solve this level

grep, sort, uniq, strings, base64, tr, tar, gzip, bzip2, xxd, mkdir, cp, mv

## Helpful Reading Material

1. [Hex dump on Wikipedia](http://en.wikipedia.org/wiki/Hex_dump)

## Solution

1. Passing this level need to know the usage of command 'xxd, gzip, bzip2, tar'
Bacause the file need to be uncompressed repeatedly.
I uncompressed and created a new file each step of the way by hand, it is tiring but I finally got the answer

the details followed are complicated:

```
// first I scp the file to my computer
> ls
data.txt  data.txt.bak
> xxd -r data.txt | gunzip - | bunzip2 - | gunzip - | tar -xf - | file -
/dev/stdin: no read permission
> ls
data5.bin  data.txt  data.txt.bak
> file data5.bin 
data5.bin: POSIX tar archive (GNU)
> tar -xf data5.bin 
> ls
data5.bin  data6.bin  data.txt  data.txt.bak
> file data6.bin 
data6.bin: bzip2 compressed data, block size = 900k
> bunzip2 data6.bin
bunzip2: Can't guess original name for data6.bin -- using data6.bin.out
> ls
data5.bin  data6.bin.out  data.txt  data.txt.bak
> file data6.bin.out 
data6.bin.out: POSIX tar archive (GNU)
> tar -xf data6.bin.out 
> ls
data5.bin  data6.bin.out  data8.bin  data.txt  data.txt.bak
> gunzip data8.bin
gzip: data8.bin: unknown suffix -- ignored
> mv data8.bin data8.bin.gz
> ls
data5.bin  data6.bin.out  data8.bin.gz  data.txt  data.txt.bak
> gunzip data8.bin
> ls
data5.bin  data6.bin.out  data8.bin  data.txt  data.txt.bak
> cat data8.bin
The password is 8ZjyCRiBWFYkneahHwxCv3wb2a1ORpYL
```

2. Here is a reference of writeup on [hackmethod](http://hackmethod.com/overthewire-bandit-13/)

