#ifndef MYEXCEPTIONCLASS_HPP
#define MYEXCEPTIONCLASS_HPP

#include <exception>
#include <string>

class MyExceptionClass: public std::exception {
    public:
        MyExceptionClass(std::string info);
        ~MyExceptionClass() = default;
        std::string get_info() const;
    private:
        std::string m_info;
};

#endif /* MYEXCEPTIONCLASS_HPP */