//练习 6.53：说明下面魅族声明中第二条语句会产生什么影响，并指出哪些不合法（如果有的话）。

// (a) int calc(int&, int&)；
//     int calc(const int&, const int&);
// (b) int calc(char*, char*);
//     int calc(const char*, const char*);
// (c) int calc(char*, char*);
//     int calc(char* const, char* const);

/*
* (a) 如果两个实参都是常量则会调用第二条声明的函数；如果两个实参都是非常量则会调用第一条声明的函数；
*     如果两个实参中一个是常量而另一个是非常量则调用会产生二义性。
*/

/*
* (b) 如果两个实参都是指向常量字符串的指针则会调用第二条声明的函数；如果两个实参都不是指向常量字符串的指针则会调用第一条声明的函数；
*     如果两个实参中一个是指向常量字符串的指针而另一个不是指向常量字符串的指针则调用会产生二义性。
*/

/*
* (c) 第二条语句定义的形参中包含的顶层 const 被忽略了，所以第二条声明属于重复声明。
*     虽然重复声明函数是合法的，但是若按照这两个声明分别定义函数则是不合法的。
*/
