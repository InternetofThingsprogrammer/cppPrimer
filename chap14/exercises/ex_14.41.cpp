//练习 14.41：你认为 C++11 为什么要新增 lambda？对于你自己来说，什么情况下会使用 lambda，什么情况下会使用类？

/*
* 新增 lambda 方便处理那些需要一次使用并且逻辑简单的可调用对象的情况。
* 当所需的可调用对象逻辑简单并且在其它地方不需要重复使用的时候选择使用 lambda，反之，
* 当可调用对象需要存储数据来进行一些相对复杂的逻辑或是在多个地方都需要重复使用相同的对象时，选择类。
*/
