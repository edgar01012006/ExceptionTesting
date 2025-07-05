#include "../include/MyExceptionClass.hpp"

MyExceptionClass::MyExceptionClass(std::string info) : m_info {info} {
    //empty
}

std::string MyExceptionClass::get_info() const {
    return m_info;
}