#include <iostream>

#include "barebone.h"
#include "error/error.h"

using namespace std;

int main(int argc, char** argv) {
	Init(argc, argv);
	return GetErrorValue();
}
