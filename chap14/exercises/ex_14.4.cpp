//练习 14.4：如何确定下列运算符是否应该是类的成员？
// (a) %    (b) %=      (c) ++      (d) ->      (e) <<      (f) &&      (g) ==      (h) ()

/*
* (a) 和 (g) 对于运算对象来说具有对称性，通常应该定义成非成员的普通函数。
* (b) 是复合赋值运算符，通常来说定义成成员函数
* (c) (d) (h) 应该定义成成员函数
* (e) 只能定义成非成员函数
* (f) 通常不建议重载
*/
