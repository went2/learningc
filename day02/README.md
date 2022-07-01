
### practising c programming

print Fahrenheit-Celsius table

the interesting thing is when I change the code: `celsius = 5 * (fahr - 32) / 9;` to: `celsius = 5 / 9 * (fahr - 32);` which is mathmatically identical with the former one, the value of `celsius` becomes `0`.

the following part in the book says it's called `integer division truncates`: any fractional part is discard. 两个整数相除，只会保留结果的整数部分。

**format printf result**

augment `%d` with a **width**

`%3d`: three digits wide;
`%6d`: six digits wide;
`%3.0f`: at least three characters wide with no decimal point and no fraction part;
`%6.1f`: at least six characters wide with 1 digit after the decimal point;

### types in c

`int`: 16-bits ints, which lies between -32768 and +32767, are common, as are 32-bits ints.
`float`: 32-bit quantity between 10^(-38) and 10^(+38);
`char`: a single **byte** character;
`short`: short integer;
`long`: long integer;
`double`: double-precision floating point;

这些 type 的 `size` 由机器决定。

### 类型转换

如果一个算数运算的两个操作符都是整数类型，那么会执行整数运算；两个操作符有一个是浮点数，另一个整数会先转成浮点数，然后进行两个浮点数的运算。