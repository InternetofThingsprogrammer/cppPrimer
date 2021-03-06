//练习 10.38：列出 5 个迭代器类别，以及每类迭代器所支持的操作。

/*
*（1）输入迭代器。支持以下 4 类操作：
*（1.1）用于比较两个迭代器相等和不相等的运算（==、！=）
*（1.2）用于推进迭代器的前置和后置递增运算（++）
*（1.3）用于读取元素的解引用运算符（*）；解引用指挥出现在赋值运算符的右侧。
*（1.4）箭头运算符（->），等价于 (*it).member，即，解引用迭代器，并提取对象的成员
*
*（2）输出迭代器。可以看作是输入迭代器的补集，至少要支持以下 2 类操作：
*（2.1）用于推进迭代器的前置和后置递增运算（++）
*（2.2）解引用运算符（*），并且解引用只出现在赋值运算符的左侧（向一个已经解引用的输出迭代器赋值，就是将值写入它所指向的元素）
*
*（3）前向迭代器。在支持输入迭代器与输出迭代器所有操作的基础上还要求至少支持下面 1 个操作。
*（3.1）可以多次向同一个元素写入值。
*
*（4）双向迭代器。在支持所有前向迭代器的操作的基础上还要求支持下面 1 个操作：
*（4.1）支持前置和后置递减运算符（--）。
*
*（5）随机访问迭代器。除了支持双向迭代器的所有操作外还要求支持以下 4 类操作：
*（5.1）用于比较两个迭代器相对位置的关系运算符（<、<=、> 和 >=）
*（5.2）迭代器和一个整数值的加减运算（+、+=、- 和 -=），计算结果是迭代器在序列中前进（或后退）给定整数个元素后的位置
*（5.3）用于两个迭代器上的减法运算符（-），得到两个迭代器的距离
*（5.4）下标运算符（iter[n]），与 *(iter[n]) 等价
*/
