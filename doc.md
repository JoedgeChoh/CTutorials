得C++者得天下

面向过程
面向对象
泛型编程
函数式编程

考验技术想象力的语言

C语言基础
算法基础: 
网络

1.1 编译阶段: 语法检查 
g++ -c test.cpp // 生成test.o
nm -C test.o // 编译过程 显示编译过程中出现的.o文件内容
                保证链接过程中函数未定义或者重复定义
                T:函数脚本定义的函数
                U:系统定义的函数或者未定义的函数

1.2 链接阶段:
链接不同函数的定义及相关索引
error1:函数为定义
error2:重复的功能函数

声明作用于编译阶段(此阶段声明的函数未定义仍可编译通过生成.o文件)
定义作用在链接阶段(通过头文件或者声明去找定义函数)





gtest:


2 预处理命令--宏定义

2.1源码-->预处理-->待编译源码-->编译(语法检查)-->目标文件-->链接-->可执行文件
待编译源码决定可执行文件的具体功编译编译源码

2.2 g++ -E define.cpp //生成待编译源码

2.3 编译器内置宏


开发版和线上版区别:是否输出日志信息
通过宏条件式编译区分是否输出日志
g++ -DDEBUG log.cpp 开发版:q



