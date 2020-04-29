#ifndef HAS_PTR_H_
#define HAS_PTR_H_

#include <iostream>
#include <string>

class HasPtr {
   public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &rhs) : ps(new std::string(*rhs.ps)), i(rhs.i) {}
    // HasPtr(const HasPtr &rhs) : ps(rhs.ps), i(rhs.i) {}

    ~HasPtr() {
        std::cout << "HasPtr 对象的析构函数被调用了" << std::endl;
        delete ps;
        ps = nullptr;
    }

    HasPtr &operator=(const HasPtr &rhs) {
        ps = new std::string(*rhs.ps);
        i = rhs.i;
        return *this;
    }

    std::string getString() const { return *ps; }
    void updateString(const char *ch) { ps->append(ch); }

   private:
    std::string *ps;
    int i;
};

#endif