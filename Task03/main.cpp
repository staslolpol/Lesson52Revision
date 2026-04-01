#include "logic.h"

int main() {

	cout << (is_power_of_three(3) ? "Yes" : "No") << endl;
	cout << (is_power_of_three(-234) ? "Yes" : "No") << endl;
	cout << (is_power_of_three(0) ? "Yes" : "No") << endl;
	cout << (is_power_of_three(1) ? "Yes" : "No") << endl;
	cout << (is_power_of_three(243) ? "Yes" : "No") << endl;
	cout << (is_power_of_three(54) ? "Yes" : "No") << endl;

	return 0;
}