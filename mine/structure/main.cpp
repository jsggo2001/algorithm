#include <iostream>
#include <cstring>

using namespace std;

struct MyStruct
{
    int first;
    int second;
    // ... 추가가능

    int Sum()
    {
        return first + second;
    }

};

int main() 
{
    // member(.) operator
    MyStruct a;
    a.first = 123;
    a.second = 456;

    cout << sizeof(a) << endl;
    cout << a.Sum() << endl;

    MyStruct *ptr_a = &a;

    ptr_a->first = -6;

    // 포인터는 member(->) operator가 화살표 
    cout << ptr_a->first << " "  << ptr_a->second << " " << ptr_a->Sum() << endl;

    // 배열도 가능
    MyStruct pairs[10];

    for (int i = 0; i < 10; i++)
    {
        pairs[i].first = i;
        pairs[i].second = i * 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << pairs[i].Sum() << endl;
    }

    // 구조체 포인터 배열

    MyStruct* ppairs[10];  // 구조체 포인터 배열 선언

    // 각 요소에 대해 동적 메모리 할당
    for (int i = 0; i < 10; i++) {
        ppairs[i] = new MyStruct;  // 동적 메모리 할당
        ppairs[i]->first = i;
        ppairs[i]->second = i * 10;
    }

    // 각 요소의 합을 출력
    for (int i = 0; i < 10; i++) {
        cout << ppairs[i]->Sum() << endl;
    }

    // 동적 메모리 해제
    for (int i = 0; i < 10; i++) {
        delete ppairs[i];  // 메모리 해제
    }
    return 0;
}