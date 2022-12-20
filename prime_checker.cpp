#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int num;
	cout << "Enter a number:";
	cin >> num;
	int sqroot = floor(sqrt(num));
	bool isPrime = true;
	int i = 2;
	for (i; i <= sqroot ;i++){
		if (num % i == 0){
			isPrime = false;
			break;
		}
	}
	if (isPrime){
		cout << "YES Prime\n";
	} else{
		cout << "NO Prime\nLeast divisor is "<<i<<endl;
	}
	return 0;
}
