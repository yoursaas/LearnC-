#include <iostream>
#include <string>
using namespace std;

int main(void) {
    float num1, num2;
    cout << "Input first and second dividers : " << endl;
    cin >> num1;
    cin >> num2;
    if (1.0 / num1 == 1.0 / num2){
        cout << "Results are equal (by 0.000001 epsilon)";
        }
    else {
        cout << "Results are not equal (by 0.000001 epsilon)"; 
        
    }
    return 0;
}
