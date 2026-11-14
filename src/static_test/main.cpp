// 程序入口：同时作为 GoogleTest 的测试入口。

#include <gtest/gtest.h>

#include <cstdio>

int main(int argc, char** argv)
{
    std::printf("===== main 进入 =====\n");

    ::testing::InitGoogleTest(&argc, argv);

    // RUN_ALL_TESTS() 的返回值：0 表示全部通过，1 表示存在失败用例。
    const int result = RUN_ALL_TESTS();

    std::printf("===== main 退出 =====\n");
    return result;
}
