/*
 * File: copydang.cpp
 */
#include "CppTestCode.h"

int copydang() {
	char *a = new char [10], *b;

	delete[] a; //should move this to below
	b = a;
	
	return 0;
}
