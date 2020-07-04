﻿// project1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdarg.h>
#include <stdio.h>
#include <vector>
#include <list>
#include <WinSock2.h>
#include <map>
#pragma  comment(lib, "ws2_32.lib")

#pragma warning(disable : 4996)

int main()
{	
	//一：课程概要总结
	//二：课程技术总结
	//完整项目：通讯框架+业务逻辑框架【理解成框架课，也没问题】
	//项目包括
	//(1)项目是非常完整的多线程高并发服务器程序
	//(2)按照包头+包体格式 收，完美的解决了数据粘包的问题
	//(3)根据收到的数据包 来执行不同的业务逻辑
	//(4)把业务处理产生的结果数据包正确的返回给客户端

	//用到的主要开发技术
	//(1)epoll高并发通讯技术，用的是水平触发模式【LT】，简单提及边缘触发模式【ET】
	//(2)通过线程池技术处理业务逻辑
	//(3)多线程，线程之间的同步技术包括互斥量、信号量等等
	//(4)次要技术：信号，日志打印，fork()创建子进程，守护进程怎么写

	//借鉴了官方nginx哪些精华代码
	//(1)一个master进程，多个worker进程的 进程框架；
	//(2)epoll实现代码，但官方epoll的触发模式用的是ET【我们的项目用的是LT】
	//(3)借鉴了官方nginx的接收数据包以及发送数据包的核心代码；

	//哪些是我们没有借鉴官方nginx而独立实现的代码
	//(1)epoll LT模式
	//(2)自己写了一套线程池来处理业务逻辑，调用适当的业务逻辑处理函数，只会处理完毕把数据发送回客户端；
	//(3)连接池中的连接的延迟回收；**************************
	//(4)专门处理数据发送的一整套数据发送逻辑以及发送线程；

	//本门课程对windows编程是否有帮助：帮助太大了；【epoll，iocp】

	//三：项目的用途总结
	//高级程序员，服务器主程序开发人员；
	//完整的项目代码；节省了你自己写通讯框架，业务逻辑框架的时间
	//就可以开口【20-30k】，自带框架
	//本门课程学到的不仅仅是知识，而是实实在在的经验，得到的是真真正正的工作经验；大家拿到了完整的商业框架；

	//四：学习方法总结
	//a)注意学习方法，只/优先 学习老师的这几门课程
	//b)无书在手不踏实,正确的方法：先看完老师的视频，然后你再决定是否有必要购买书籍；
	//c)做题；先把课程学完，回头再决定是否额外做题；
	//d)很多人 往往把一些工具书当成是常规书籍看；
	  //很多书籍 泛读而是精读，大家只需要记一个大概内容、作用和一个大概位置，需要的时候去查阅就够了；
	  //老师认为不值得花大量时间去啃工具书，需要的时候现学和查阅就够；
	//不要指望看一遍就能看懂

	//五：架构师之路
	//卷1是想成长为架构师的人所必须要学的知识，否则，你永远不可能成为 一个合格的架构师；
	//在老师看来，架构师，首先应该是一个非常优秀的软件开发人员；
	//继续学分布式系统架构相关的知识和课程：zookeeper,dubbo,docker容器，hadoop，Redis，memcached ,mysql；

	//提醒大家：时刻不要忘记，提升自己的内功才是最关键的【编程能力，解决问题的思路】，内功练好，很多知识学起来触类旁通；
	//it行业，永远需要学习，终生需要学习，永无止境；

	//六：卷2的计划
	//卷2的目的：老师亲自给大家示范 卷1中的服务器项目到底怎样在实际的工作中应用
	//cocos2d-x作为客户端，卷1里的项目作为服务器端
	//《冒险之路》,steam上：

	//七：再见
	//12个 .h头文件， 20个.cxx源文件
	//2200行代码，额外还有1400行注释；代码行并不多，注释量很大

	//老师期待同学学完这门课程靠这门课程拿到30K，请第一时间告诉老师这个好消息；
	   	  
}

