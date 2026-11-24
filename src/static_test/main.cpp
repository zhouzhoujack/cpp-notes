// 程序入口：同时作为 GoogleTest 的测试入口。

#include <gtest/gtest.h>

#include <toolkit/tlGLog.h>

int main(int argc, char** argv)
{
    LOGI << "===== main 进入 =====";

    ::testing::InitGoogleTest(&argc, argv);

    // RUN_ALL_TESTS() 的返回值：0 表示全部通过，1 表示存在失败用例。
    const int result = RUN_ALL_TESTS();

    LOGI << "===== main 退出 =====";
    return result;
}
