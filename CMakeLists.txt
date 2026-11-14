cmake_minimum_required(VERSION 3.16)

project(cpp-notes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include("/home/hz/toolchain/cmake/toolchain.cmake")

# ---------------------------------------------------------------------------
# 单元测试（GoogleTest + CTest）
# 目标定义在 src/static_test/CMakeLists.txt
# 运行：ctest --test-dir build --output-on-failure
# ---------------------------------------------------------------------------
enable_testing()

add_subdirectory(src/static_test)
