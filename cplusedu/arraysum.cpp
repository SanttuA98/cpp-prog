#include <iostream>
using namespace std;
int main() {

	int array[] = {5, 2, 7, 3};
	int sum = 0;

	for(int i = 0; i < 4; i++) {
		sum = sum + array[i];
	}
	cout << "The array sum is " << sum;
	return 0;
}