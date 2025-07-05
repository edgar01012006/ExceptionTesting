#include <iostream>
#include "../include/MyClass.hpp"
#include "../include/MyExceptionClass.hpp"

MyClass::MyClass(double number) {
    try {
        input(number);
        m_number = number;
    }
    catch (MyExceptionClass& mine) {
        std::cout << mine.get_info();
        m_number = 0;
    }
}

void MyClass::input(double number) {
    if (number > 50) {
        throw MyExceptionClass{"Number bigger than 50"};
    }
    else {
        //nothing;
    }
}

double MyClass::get_number() const {
    return m_number;
}