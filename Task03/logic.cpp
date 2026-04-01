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


int get_max_element(int array[], int size){
	return 0;
}
