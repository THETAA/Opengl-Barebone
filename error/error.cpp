#include <iostream>

using namespace std;

int ErrorState = 0;

int GetErrorValue() {
	return ErrorState;
}

void ChangeErrorValue(int val) {
	ErrorState = val;
}
