/*
A program which prints the first 15 numbers of the following series:
1 0 2 1 3 2 4 3 5...
1 1 1 3 5 9 17...
-1 0 -3 -2 -5 -4 -7...
*/
#include <iostream>
using namespace std;

int main()
{
    int a=1;
    int i;
    for(i=1;i<8;i++){
        cout << a << " ";
        a--;
        cout << a << " ";
        a = a + 2;
    }
    cout << a << " ";
    return 0;
}