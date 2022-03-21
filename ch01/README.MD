# 程序设计宏观认识

## 1.1 宏观框架结构

### 1.1.1 基本结构

编译预处理

- 书写格式：#include <stdio.h> 或 #include "stdio.h"  
- 程序编译之前的准备工作：以“#”开头  
- 文件包含命令，引入头文件：include命令  
- 头文件：stdio.h，.h为头文件扩展名，stdio为standard input & output  

函数组

- 每个C程序必须有一个main函数  
- 一个C程序总是从main函数开始执行，到main函数结束，与main函数位置无关  
- 包括主函数，库函数和用户自定义函数  
- 函数是构成C语言程序的基本单位  
- 函数组中有且仅有一个main函数  
- 程序的执行，以主函数为核心展开  
- 程序语句结束符为“;”  
- main函数执行结束后，返回系统  

```c
	#include "demo.h"                      // 编译预处理指令
	/* First demo of c language */         // 注释
	void hello()                           // 主函数的函数头
	{                                      // 函数的开始标记
		printf("Hello, World!\n");         // 函数的主体
	}                                      // 函数的结束标记
```

### 1.1.2 程序注释

- //：单行注释  
- /* */：单行或多行注释  

<stdio.h>标准库函数

|序号|函数原型|功能|
|---:|:---|:---|
|1|int printf(char *format...)|产生格式化输出的函数|
|2|int fprintf(FILE *stream, char *format[, argument,...])|传送格式化输出到一个流中|
|3|int scanf(char *format[,argument,...])|执行格式化输入|
|4|int fscanf(FILE *stream, char *format[,argument...])|从一个流中执行格式化输入|

## 1.2 程序构成

### 1.2.1 标识符

> 关键字、预定义标识符和用户自定义标识符  

C语言共有37个关键字，且必须小写；分为以下几类：  

- 数据类型说明符：char、double、enum、float、int、long、short、signed、struct、union、unsigned  
- 语句定义符：void、for、do、while、break、continue、if、else、goto、switch、case、default、return  
- 存储类型关键字：auto、extern、register  
- 其他关键字：static、const、sizeof、typedef、volatile、inline、restrict、_Bool、_Complex、_Imaginary  

预定义标识符：  

- 如库函数名称(include、printf、scanf)  
- 预编译处理命令(define)  

用户自定义标识符，命名规则：  

- 只能由字母、下划线、数字组成  
- 第一个字符必须是字母或下划线，不能是数字  
- 字符大小写敏感  
- 不能是C语言关键字  
- 尽量使用“见名知意”的名字，提高可读性  
- 理论上，C语言不限制标识符长度；但是受限于不同的C语言编译系统和机器系统，建议不超过8个字符的长度。因为某些系统规定标识符的前8为才有效，即只要前8位一样，就认为是同一个标识符  

### 1.2.2 语句

说明语句和执行语句，以“;”结束  
通常，一行只写一条语句；也可以把多条语句写在一行内，或者一条语句写在多行  

### 1.2.3 函数

函数，是构成C语言程序的基本单元；而语句则是函数的重要组成  
函数分为：主函数、库函数、自定义函数  

定义形式如下：

```c
	return_type func_name(param)    // 函数首部
	{                               // 函数体
		decclare_expression;
		excuted_expression;
	}
```

## 1.3 开发环境

C语言的正确执行顺序是：编译、编码、链接、运行  

C语言编写的程序为源程序，必须通过编译程序翻译为二进制目标代码，才能被计算机识别和执行  

以Visual Studio 2022为例，展示新建一个C语言程序的步骤

- 打开VS2022，新建空白解决方案  
- 添加“新建解决方案文件夹”  
- 添加“新建项目”，选择“C++”\“Windows”\“控制台”  
- 选择“空项目”\“下一步”  
- 更改项目名称和存储位置，然后“创建”  
- 在“解决方案资源管理器”窗口，右键点击新建的项目，选择“属性”  
- 在弹出窗口中，将“常规输出”的属性改为“.\bin\”  
- 在源文件的文件夹，右键“添加”\“新建项”,选择“C++文件(.cpp)”  
- 重命名文件为“demo.c”,然后“添加”  
- 编写C程序  
