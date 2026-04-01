#include "logic.h"

bool recursion(int number) {
	if (number == 1) {
		return true;
	}

	if (number % 3 != 0) {
		return false;
	}
	
	return recursion(number / 3);
}


bool is_power_of_three(int number) {
	if (number <= 0 ) {
		return false;
	}


	return recursion(number);
}
