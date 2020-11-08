#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;
    int ans, i, j;
    bool isPrime = true;
    
    cin >> num1;
    cin >> num2;
    
    if(num2 < num1){
        for(i = num2; i < num1; i++){
            if(i <= 1){
                isPrime = false;
            }
            for (j = 2; j < i; j++){ 
                if (i % j == 0){
                   isPrime = false; 
                } 
            }
            if(isPrime){
                cout << i << " ";
            }
            isPrime = true;
        }
    }
    else{
        for(i = num1; i < num2; i++){
            if(i <= 1){
                isPrime = false;
            }
           for (j = 2; j < i; j++){ 
                if (i % j == 0){
                   isPrime = false; 
                } 
            }
            if(isPrime){
                cout << i << " ";
            }
            isPrime = true;
        }
    }
    return 0;
}