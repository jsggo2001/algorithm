#include "MyClass.h" // 선언 헤더 꼭 include

#include <iostream>

using namespace std;

MyClass::MyClass()
{
    // 호출 시점 확인
    cout << "MyClass()" << endl;
}

MyClass::MyClass(int number)
{
    // 호출 시점 확인
    cout << "MyClass(int number)" << endl;

    this->number_ = number;
}

MyClass::~MyClass()
{
    // 호출 시점 확인
    cout << "~MyClass()" << endl;
}

void MyClass::Increment(int a)
{
    number_ += a;
}

void MyClass::Decrement(int a)
{
    number_ -= a;
}

void MyClass::Print()
{
    cout << number_ << endl;
}