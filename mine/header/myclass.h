#ifndef MY_CLASS_H
#define MY_CLASS_H

// 새로운 멤버 함수 추가해보기 연습

class MyClass
{
public:
    MyClass(); // 멤버 함수의 몸체(body) 모두 삭제, 깔끔
    MyClass(int number);
    ~MyClass();

    void Increment(int a);
    void Decrement(int a);
    void Print();

private:
    int number_ = 0; // 초깃값
};

#endif // MY_CLASS_H