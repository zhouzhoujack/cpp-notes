# ---------------------------------------------------------------------------
# 单元测试目标：入口由同目录的 main.cpp 提供（不链接 gtest_main）
# 运行：ctest --test-dir build --output-on-failure
# ---------------------------------------------------------------------------
find_package(GTest CONFIG REQUIRED)

add_executable(test_static_dtor
    main.cpp
    test_static_dtor.cpp)

target_link_libraries(test_static_dtor PRIVATE GTest::gtest)

include(GoogleTest)
gtest_discover_tests(test_static_dtor)
