#include <iostream>

using namespace std;

int main() {

    int number;

    cin >> number;

    // if (number % 2 == 0) {
    //     cout << "짝수입니다.\n";
    // } else {
    //     cout << "홀수입니다.\n";
    // }

    switch (number)
    {
        case 0:
            cout << "정수 0입니다." << endl;
            break;
        case 1:
            cout << "정수 1입니다." << endl;
            break;
        default:
            cout << "그 외의 숫자입니다." << endl;
            break;
    }

    return 0;
}

