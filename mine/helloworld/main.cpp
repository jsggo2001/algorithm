#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, world" << endl;

    // char user_input[100];

    // cin >> user_input;
    // cout << user_input;

    int i;
    i = 123;

    cout << i << " " << sizeof(i) << endl;

    i = 987.654;

    cout << "int from double " << i << endl;

    bool is_good = true;
    is_good = false;

    cout << is_good << endl;

    cout << true << endl;

    cout << boolalpha << true << endl;
    
    cout << is_good << endl;

    cout << noboolalpha << true << endl;

    i = 123;

    {
        int i = 345;
        cout << i << endl;
    }

    cout << i << endl;

    return 0;
}  