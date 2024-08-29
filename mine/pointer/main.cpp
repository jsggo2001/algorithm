#include <iostream>

using namespace std;

int main() {
    
    int a = 123;

    // address of 주소 연산자 & ampersand
    cout << a << " " << &a << endl;

    int *b = &a; // b에 a의 주소 대입

    cout << *b << endl;

    *b = 567;

    cout << a << " " << b << " " << *b << endl;

    double *c = nullptr;

    cout << sizeof(int) << " " << sizeof(double) << endl;
    cout << sizeof(int *) << " " << sizeof(double *) << endl;
    cout << sizeof(b) << " " << sizeof(c) << endl;

    // 포인터 연산과 배열
    
    // sizeof(char) == 1 입니다. char* e = 0; e + 15는 몇일까요"
    // char에 대해서 퀴즈 내기 (확인도 직접 해보세요)

    // size_t 안내 (여기서는 주소를 10진수로 변환 용도)
    cout << sizeof(size_t) << endl; // 8
    cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << endl;
    cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << endl;

    // char* e = 0;
    // cout << "e ---->>" << " " << e << endl;
    // cout << "다음 숫자는 ???" << endl;
    // cout << sizeof(char) << " " << sizeof(e + 15) << " " << e << endl;

    // 문자열, 배열 연결시키기
    int my_array[] = {23, 38, 56, 69, 74};

    char my_str[] = {'h', 'e', 'l', 'l', 'o', '\n'};

    char *ptr = my_str; // 배열의 이름은 포인터

    cout << *(ptr + 4) << endl; 

    cout << ptr[4] << endl;
    
    return 0;
}