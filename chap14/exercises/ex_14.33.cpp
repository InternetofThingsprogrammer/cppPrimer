//练习 14.33：一个重载的函数调用运算符应该接受几个运算对象？

/*
* 重载的函数运算符至少要包含类的对象自身，所以至少要包含一个运算对象。
* 但是在实际调用的时候，类对象本身是隐式传入的，实际接受的参数大于等于 0 个。
*/