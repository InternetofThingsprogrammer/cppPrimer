//练习 9.3：构成迭代器范围的迭代器有何限制？

/*
* 如果满足如下条件，两个迭代器 begin 和 end 构成一个迭代器范围：
*（1）它们指向同一个容器中的元素，或者是容器最后一个元素之后的位置，且
*（2）我们可以通过反复递增 begin 来到达 end。换句话说，end 不在 begin 之前。
*/