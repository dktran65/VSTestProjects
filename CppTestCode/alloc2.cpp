/*
 * File: alloc2.cpp
 */
#include <stdlib.h>
#include "CppTestCode.h"

int alloc2() {
	char *a;

	a = (char *) malloc(1);
	delete a;
	return 0;
}
