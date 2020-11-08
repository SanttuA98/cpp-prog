/*
A program which prints the first 15 numbers of the following series:
1 1 1 3 5 9 17...
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 15;
    int i;
    int a=1,b=1,c=1,d;

    cout << a << " " << b << " " << c << " ";
    for(i=0;i<n-3;i++){
        d = a + b + c;
        cout << d << " ";
        a = b;
        b = c;
        c = d;
    }
    return 0;
}