#ifndef CONST_STR_BLOB_PTR_H_
#define CONST_STR_BLOB_PTR_H_

#include <cstddef>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

#include "StrBlob.h"

class ConstStrBlobPtr {
   private:
    //若检查成功，check 返回一个指向 vector 的 shared_ptr
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string &) const;
    //保存一个 weak_ptr，意味着底层 vector 可能被销毁
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;  //在数组中的当前位置
   public:
    ConstStrBlobPtr() : curr(0){};
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
    ~ConstStrBlobPtr() = default;
    //deref 成员调用 check，检查使用 vector 是否安全以及 curr 是否在合法范围。
    std::string &deref() const;
    //前置递增，返回递增后的对象的引用
    ConstStrBlobPtr &incr();

    std::string &operator*() const;
    std::string &operator->() const;
};

std::string &ConstStrBlobPtr::operator*() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

std::string &ConstStrBlobPtr::operator->() const {
    return this->operator*();
}

#endif