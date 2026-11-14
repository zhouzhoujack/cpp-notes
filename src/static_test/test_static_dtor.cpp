#include <gtest/gtest.h>

#include <cstdio>

namespace {

struct Tracker {
    const char* name;

    explicit Tracker(const char* n) : name(n)
    {
        std::printf("[ctor] %s\n", name);
    }

    ~Tracker()
    {
        std::printf("[dtor] %s\n", name);
    }
};

// 全局静态对象：main 之前构造，进程退出时析构
Tracker g_obj("static-obj");

}  // namespace

TEST(StaticDtor, ObserveDestructionOrder)
{
}
