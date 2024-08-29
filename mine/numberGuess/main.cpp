#include <iostream>
#include <random>

using namespace std;

int main() {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 99); // [1, 99]

    int number = distrib(gen);

    int answer = -1;
    while(1)
    {
        cout << "입력 : ";
        cin >> answer;
        
        if (number == answer) {
            cout << "정답!" << endl;
            break;
        } else if (answer > number) {
            cout << "너무 커요" << endl;
        } else {
            cout << "너무 작아요" << endl;
        }
    }

    return 0;
}