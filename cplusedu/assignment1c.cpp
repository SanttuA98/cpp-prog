/*
A program, which receives two numbers and prints to the standard output device 
the all prime numbers between the given numbers
*/
#include <iostream>
using namespace std;

int main()
{
    int a=-1;
    int i;
    for(i=1;i<8;i++){
    cout << a << " ";
    a++;
    cout << a << " ";
    a = a - 3;
        
    }
    cout << a << " ";
    
    return 0;
}