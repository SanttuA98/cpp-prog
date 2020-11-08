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