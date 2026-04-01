#include "logic.h"

int main() {

	cout << (equals(-13, 4) ? "Yes" : "No") << endl;
	cout << (equals(13, -4) ? "Yes" : "No") << endl;
	cout << (equals(-13, -4) ? "Yes" : "No") << endl;
	cout << (equals(0, 4) ? "Yes" : "No") << endl;
	cout << (equals(13, 0) ? "Yes" : "No") << endl;
	cout << (equals(13, 4) ? "Yes" : "No") << endl;
	cout << (equals(0, 0) ? "Yes" : "No") << endl;
	cout << (equals(23, 4) ? "Yes" : "No") << endl;


	return 0;
}