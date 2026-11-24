#include <gtest/gtest.h>

#include <toolkit/tlGLog.h>

namespace {

struct Tracker {
    const char* name;

    explicit Tracker(const char* n) : name(n)
    {
        LOGI << "[ctor] " << name;
    }

    ~Tracker()
    {
        LOGI << "[dtor] " << name;
    }
};

// 全局静态对象：main 之前构造，进程退出时析构
Tracker g_obj("static-obj");

}  // namespace

TEST(StaticDtor, ObserveDestructionOrder)
{
}
