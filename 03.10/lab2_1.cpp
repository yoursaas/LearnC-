#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    int x;
    float y;
    
    for(int i = 0; i < 5; i++){
        cout<<"Enter x: ";
        cin>>x;
        y = pow(sin(x),5)+abs(5 * x - 1.5);
        
        cout<<"Y="<<y;
    }
}
