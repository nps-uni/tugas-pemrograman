#include <iostream>
using namespace std;

int n;

//recursive function using if else statements
int function(int n) {
	if (n == 1)
	return 1;
	else if (n <= 0)
	return 0;
	else if (n % 2 == 0)
	return n/2 * function(n - 1);
	else
	return n * function(n-1);
}

//input and displaying the result of the function
int main () {
	int hasil;
	cin >> n;
	hasil = function(n);
	cout << hasil;
}

