#include <bits/stdc++.h>

using namespace std;


int binarySearch(int array[], int n, int x) {
    int a = 0, b = n - 1;

    while (a <= b) {
        int k = (a + b) / 2;
        if (array[k] == x) {
            return k;
        }
        if (array[k] < x) a = k + 1;
        else b = k + 1;
    }

    return -1;
}

int binarySearch2(int array[], int n, int x) {
    int k = 0;
    for (int b = n/2; b >= 1; b /= 2) {
        while (k + b < n && array[k + b] <= x) k += b;
    }
    if (array[k] == x) {
        return k;
    }
    return -1;
}

int main() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    int result = binarySearch2(array, 10, 1);

    cout << "result == " << result << endl;
    return 0;
}