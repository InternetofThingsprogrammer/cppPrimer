//练习 5.15：说明下列循环的含义并改正其中的错误。
// (a) for (int ix = 0; ix != sz; ++ix) {/* ... */}
//     if (ix != sz)
//          //...
// (b) int ix;
//     for (ix != sz; ++ix) {/* ... */}
// (c) for (int ix = 0; ix != sz; ++ix, ++sz) {/* ... */}

/*
* (a) for 语句总定义的变量作用域只是 for 语句内部，在外部无法访问。所以 if 语句中无法使用变量 ix。可改为：
*/
// int ix；
// for (ix = 0; ix != sz; ++ix) {/* ... */}
//     if (ix != sz)
//          //...

/*
* (b) 缺少初始化语句，可改为：
*/
// int ix;
// for (ix = 0;ix != sz; ++ix) {/* ... */}

/*
* (c) 同时递增 ix 与 sz 导致判断条件永远为 true，循环无法退出。可改为：
*/
// for (int ix = 0; ix != sz; ++ix) {/* ... */}
