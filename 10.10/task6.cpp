#include<iostream>  
#include <stdio.h>  
using namespace std;  
  
int main()  
{  
   int n, a, b=0,i=1;  
    cin >> n;  
    while (n > 0)  
    {  
        a = n % 10;  
        b = b * 10 + a;  
        n = n / 10;  
        if((b%10)!=7){ 
          i++;         
        } 
    }  
    while (b > 0)  
    {  
        cout <<b % 10<<",";  
        b = b / 10;  
    }  
    cout<<endl<<i; 
     
}
