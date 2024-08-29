#include <iostream>

using namespace std;

int main() {

    int a = 1;
    int b = 2;
    int c = 3;

    int my_array[3] = {1,2,3};

    cout << my_array[0] << " "
         << my_array[1] << " "
         << my_array[2] << endl;

    my_array[1] = 5;

    cout << my_array[0] << " "
         << my_array[1] << " "
         << my_array[2] << endl;
    
    char name[14] = "Hello, World!";


    cout << name << " " << sizeof(name) << endl;

    name[10] = 'A';
    name[11] = 'B';
    name[12] = 'C';

    cout << name << " " << endl;

    name[2] = '\0';

    cout << name << endl;

    return 0;
}