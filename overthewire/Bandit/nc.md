# linux 中 nc 命令的使用

+ 聊天（两台 linux 主机间传输文本/文件信息）

## 聊天

设两台主机分别为 Test1 和 Test2
先在 Test1 上监听端口，然后在 Test2 建立链接

```
root@Test1# nc -l [Port]
// 在这里发送以及接受数据

===========================
root@Test2# nc [IP of Test1] [Port]
// 在这里发送以及接受数据
```

```
root@Test1# nc -l [Port] > file
root@Test2# nc [IP of Test1] [Port] < file
// Test2 给 Test1 发送文件 file
============================================
root@Test1# nc -l [Port] < file
root@Test2# nc [IP of Test1] [Port] > file
// Test1 给 Test2 发送文件 file
```

