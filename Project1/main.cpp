// base case --> number 0...9 --> number
// 
// number 1234
// recursion case -- > f(1234) --> f1(123) + 4
//f(123) --> f1(12) + 3
//f(12) --> f1(1) + 2

#include <iostream>
#include <string>

int recursion(int number) {
	if (number < 10) {
		return number;
	}

	return recursion(number / 10 + number % 10);
}

int sum_of_digit(int number) {
	number *= (number < 0 ? -1 : 1);

	return recursion(number);
}

int main() {

	cout << sum_of_digit(1234) << endl;
	cout << sum_of_digit(-1234) << endl;
	cout << sum_of_digit(1238) << endl;
	cout << sum_of_digit(1134) << endl;


	return 0;
}