//练习 7.46：下面哪些论断是不正确的？为什么？
// (a) 一个类至少必须提供一个构造函数。
// (b) 默认构造函数是参数列表为空的构造函数。
// (c) 如果对于类来说不存在有意义的默认值，则类不应该提供默认构造函数。
// (d) 如果类没有定义默认构造函数，则编译器将会为其生成一个并把每个数据成员初始化成相应类型的默认值。

/*
* (a) 不正确。如果类灭有显式地提供任何构造函数，则编译器会为其生成一个默认构造函数。
* (b) 正确。
* (c) 从程序设计上来说是不正确的，应该总是给类提供一个默认构造函数。但是如果从类现实意义考虑，也确实不应该提供默认构造函数，以防出现意外的类对象。
* (d) 不正确。只有当没有提供任何构造函数的时候编译器才会生成一个合成默认构造函数，一旦显式地提供了任何的构造函数，那么编译器就不会生成默认构造函数了。
*/