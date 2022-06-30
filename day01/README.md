### C 语言标准的版本

- 1978 The C Programming Language aka K&R
- 1989 ANSI C aka C89 使用较多的版本
- 1999 ISO C aka C99
- 2011 ISO C aks C11 最新版本

### c语言程序的编写、编译和执行

人按照c语言的标准写源代码，产生 `helloworld.c` 文件；c语言编辑器（c compiler)将源代码编辑成机器码，产生 `helloworld.o` 文件；计算机执行机器码文档，产生结果。

C语言编译器有：

- visual c++ from Microsoft
- GCC, GPL 授权
- CLang, BSD 授权

实作定义行为（Implementation defined）：相同的 source code，由不同编译器编译，得到的 machine code 有可能不同，这取决于编译器对C语言标准的实现情况。

### 使用 IDE 写C语言程式

#### Code::Blocks

打开[官网下载页](http://www.codeblocks.org/downloads/binaries/#imagesoswindows48pnglogo-microsoft-windows)，选择 `codeblocks-20.03mingw-setup.exe` 版本，自带 `mingw` 语言编译器。

安装即用。

注：如果调整字体大小保存后，编辑器报错 `"A debugging error in this application has failed." and "....\include/wx/font.h(282): assert "numWeight > 0" failed in GetWeightClosestToNumericValue()."`，解决方法是将字体大小设为 12 或 18 不要设 14 或 16，参考[同样遭罪的 stackoverflower](https://stackoverflow.com/questions/63468251/wxwidgets-font-error-in-codeblocks-assert-numweight-0-failed-in-getweight)


#### 在 VS Code 中写C程式

1. VS Code 安装插件 `C/C++`;
2. 下载安装C语言编译器 [MinGW](https://sourceforge.net/projects/mingw/);
3. 在 windows 的系统环境变量中添加一个条目 `C:\MinGW\bin`;
4. VS Code 中写C程式

### Entry Point: C程序执行的入口

从一个 `entry point` 开始执行，`entry point` 就是代码中的 `int main() { `

### 对新手写 c 程式的建议

新手写 c语言程式应重视可读性，越容易预测源代码对应行为，可读性越好，后续捉虫与维护时心智负担就越少。

举例：
