### 1. 资料型别（data type, 数据类型）

- 资料处理的核心问题：
	- 记忆：资料要怎么储存？
	- 计算：资料能做哪些运算？运算的结果是什么？

- 一个资料的型别决定了它要怎么储存、怎样计算

#### 存储资料

内存空间以字节为单位（byte，台译位元组）组成；

- 每个字节由多个比特(bit, 台译位元)构成
	- 一个字节一般由 8个bit 构成；
	- 1个 bit 可表示 0 或 1 两个值中的一种，一个字节表示 8个 0 和 1 的组合。

- 资料型别决定了如何用 0 和 1 的序列来保存资料，如 `int` 整数类型决定了一个整数 `3` 如何用一串 0 和 1 来表示，以储存在内存中。

**用 sizeof 查看类型占内存空间的大小**

用 `sizeof` 运算求出在**所用编译器**上的某个值或类型所占的内存空间大小，单位：字节

```c
printf("long int: %d.\n", sizeof(long int));
```

#### 定义变量

语法：<资料型别> <变量名称>；

宣告一个变量，它在内存中占的大小就确定。


#### 怎么理解用 0 和 1 就可以表示各种资料

1. 计算机的基本存储单位是 byte，一个 byte 由 8 个 bits 组成，1 bit 要么存 0 要么存 1，那么一个 byte 可以表示**多少种不同的组合**？是 `2^8` 即 256 种，如果用这 256 个组合来表示整数，可以表示 256 个不同的整数；
2. 接着问，要表示哪 256 个整数？答案是由人来约定，可以是 0 到 255， 也可以是 -128 到 127，甚至可以 100 到 355。如果用第一种约定，那么数字 0，在计算机中用 `00000000` 表示，数字 1 用 `00000001` 表示。

#### 整数的溢位(overflow)

int 一般占 4 个 bytes大小，也就是可以表示 `2^(4*8)` 个整数， 用来表示有符号整数的话，范围是 -2147483648 到 2147483647 之间，接近十位数，用中文说大约是负21亿多到正21亿多。

如果计算 `10000 * 10000 * 10000`，得到的结果有13位，超过整数能表示的范围，叫发生了溢位，溢位会造成未定义行为，得到的值是不可靠的。

- 如何避免溢位？
- 用可以表示更大范围的整数类型，如用 long int 代替 int；

- 还是不够办？用复合类型，如阵列。

### 2. notes taken while reading K&R

#### print Fahrenheit-Celsius table

the interesting thing is when I change the code: `celsius = 5 * (fahr - 32) / 9;` to: `celsius = 5 / 9 * (fahr - 32);` which is mathmatically identical with the former one, the value of `celsius` becomes `0`.

the following part in the book says it's called `integer division truncates`: any fractional part is discard. 两个整数相除，只会保留结果的整数部分。

**format printf result**

augment `%d` with a **width**

`%3d`: three digits wide;
`%6d`: six digits wide;
`%3.0f`: at least three characters wide with no decimal point and no fraction part;
`%6.1f`: at least six characters wide with 1 digit after the decimal point;

#### types in c

`int`: 16-bits ints, which lies between -32768 and +32767, are common, as are 32-bits ints.
`float`: 32-bit quantity between 10^(-38) and 10^(+38);
`char`: a single byte character, 1 byte;
`short`: short integer, 2 bytes;
`long`: long integer, 4 bytes;
`double`: double-precision floating point, 8 bytes;

这些 type 的 `size` 由机器决定。

#### 类型转换

如果一个算数运算的两个操作符都是整数类型，那么会执行整数运算；两个操作符有一个是浮点数，另一个整数会先转成浮点数，然后进行两个浮点数的运算。
