#include <iostream>
#include <string>
#include "reflect.hpp"

// --------------------------------

struct Student {
    std::string name;
    int age;

    REFLECT(name, age);
};


int main() {
    Student stu = {
        .name = "Ming",
        .age = 23,
    };

    std::string bin = reflect::json_encode(stu);
    std::cout << bin << '\n';

    Student res = reflect::json_decode<Student>(bin);
    std::cout << res.name << " " << res.age << '\n';

    return 0;
}