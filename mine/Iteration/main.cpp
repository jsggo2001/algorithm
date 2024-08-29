#include <iostream>

using namespace std;

int main() {

     for (int i = 0; i < 10; i++) 
     {
          cout << i << " ";     
     }
     cout << endl;

     int my_array[] = {1,2,3,4,5,4,3,2,1};

     for (int i = 0; i < sizeof(my_array) / sizeof(int); i++) {
          cout << my_array[i] << " ";
     }
     cout << endl;
     
     char my_string[] = "Hello, World!";

     for (int i = 0; i < sizeof(my_string) / sizeof(char); i++) {
          cout << my_string[i];
     }
     
     cout << endl;

     int i = 0;

     while (my_string[i] != '\0') {
          cout << my_string[i];
          i++;
     }

     cout << endl;

     for (int i = 0; my_string[i] != '\0'; i++) {
          cout << my_string[i];
     }

     cout << endl;

     i = 0;
     while (i < 10) {
          cout << i++ << " ";
     }

     cout << endl;

     return 0;
}