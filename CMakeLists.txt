cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)

project(staticRelect)

add_compile_options(-Wall -Wextra -Werror=return-type)

# 查找当前目录下所有的 .cpp 文件，并存储在 sources 变量中
file(GLOB sources CONFIGURE_DEPENDS "*.cpp")

foreach(source IN LISTS sources)
    get_filename_component(name ${source} NAME_WE)
    add_executable(${name} ${source})
endforeach()