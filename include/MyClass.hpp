#ifndef MYCLASS_HPP
#define MYCLASS_HPP

class MyClass {
    public:
        MyClass(double number);
        ~MyClass() = default;
        void input(double number);
        double get_number() const;
    private:
        double m_number;
};

#endif /* MYCLASS_HPP */