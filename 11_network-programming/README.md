# 网络编程 network programming

## 1.客户端与服务器模型

## 2.DNS

`nslookup www.google.com`: 查找 domain name 对应的 ip address

mutiple domain names could map to single Internet address and vice visa.

## 3.connections

客户端与服务器之间的通信靠 connections，connections 由两端的 socket 建立，或者说 socket 是 connection 的 endpoint。

the connection is :
	- point-to-point: 点对点地把两个**进程**连接起来;
	- full-duplex: 全双工，数据可同时来回传送;
	- reliable: 接收方收到的 bytes 流的**顺序**与发送方发出时的一样

socket address is an `IPaddredd:port` pair:
	- a port a 16-bit integer tthat identifies a process
	- 发送方的端口号由操作系统自动授予
	- well-known port: 一些服务的端口号和名称是确定的
		- web servers: 80/http
		- email servers: 23/smtp
		- ssh servers: 22/ssh
	- 有关端口/服务名的信息在Linux 系统上存在文件 `/etc/services` 中

## 4.sockets interface

### what is a socket

- 于 kernel 来说，a socket is an endpoint of communication
- 于一个应用来说，a socket is a file descriptor (文件描述符) that lets the application read/write from/to the network
	- 所有的 Unix I/O 设备，包括网络，都被当做 files 进行操作。

socket 让应用程序像读写一般文件一样从网络获取/发送数据。

#### socket address structures

socket 地址是个 16 bytes 的结构

Internet-specific socket address:

```c
struct sockaddr_in {
	uint16_t sin_family;
	uint16_t sin_port;
	struct in_addr sin_addr;
	unsigned char sin_zero[8];
};
```

#### socket inteface 的函数

- socket：创建一个 socket 文件描述符。
- bind：a kernal call (系统核心的调用) ，将服务器的 socket 地址和上面创建的描述符绑定起来。
- listen：a kernal call (系统核心的调用) ，告诉操作系统这个文件描述符是作为服务端用的。
- accept：调用后，服务器就会处于等待客户端发请求的状态。

- connect：客户端调用，发起一个 connection。

#### 主机和服务的转换

Linux 提供的强大函数：

- `getaddrinfo`: 将 domain name 字符串转为 socket address 结构
- `getnameinfo`: 将 ip 地址 转为 domain name






