#include<iostream>
using namespace std;
int main()
{
   int num1, num2, total;
 
  cout << "Enter an integer: ";
  cin >> num1;
  cout<<"Enter a larger integer: ";
  cin >> num2;
 
 total = 0;
  for (int x=num1+1; x<num2; x++)
  { 
        total += x;
  }  
  cout<<"The sum of between two numbers = " << total << endl;
return 0;
}