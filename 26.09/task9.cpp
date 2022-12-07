#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int array[4];
    for (int i = 0; i < 4; i++) {
        cin >> array[i];
        if (array[i] < 1 
            || array[i] > 255) { 
            return -1;
        }
    }
    cout << array[0] << "." << array[1] << "." << array[2] << "." << array[3];
    return 0;
}
