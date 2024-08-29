#include <iostream>
#include <cstring>

using namespace std;

const int kMaxStr = 100; // 전역 상수

bool IsEqual(const char str1[], const char str2[])
{
    // for (int i = 0; i < kMaxStr; i++)
    int i = 0;
    while (1)
    {
        cout << int(str1[i]) << " " << int(str2[i]) << endl;

        if (str1[i] != str2[i]) 
            return false;

        if (str1[i] == '\0' && str2[i] == '\0')
        return true;
        i++;
    }

    return true;
}

int main() {

    const char str1[kMaxStr] = "종료";

    while (1)
    {
        cout << "명령을 입력해주세요 ";
        char str2[kMaxStr];
        cin.getline(str2, kMaxStr); 
        if (IsEqual(str1, str2)) {
            cout << "종료합니다." << endl;
            break;
        } else {
            cout << "계속합니다." << endl;
        }
    }
    return 0;
}