//练习 13.51：虽然 unique_ptr 不能拷贝，但我们在 12.1.5 节（第 418 页）中编写了一个 clone 函数，它以值方式返回一个 unique_ptr。
//解释为什么函数是合法的，以及为什么它能正确工作。

/*
* 因为，不能拷贝 unique_ptr 的规则有一个例外：我们可以拷贝或者赋值一个将要被销毁的 unique_ptr。
* clone 函数返回的是一个局部的 unique_ptr，这是一个即将被销毁的 unique_ptr，所以它是合法的。
*/