/*
 * File: trace.cpp
 */
#include "CppTestCode.h"

int twice(int j) {
	return j*2;
}

class Object {
public:
	int i;
	Object() {
		i = 0;
	}
	Object(int j) {
		i = j;
	}
	operator int() { return twice(i); }
};

int trace() {
	Object o;
	int i=0;
	int a=0;

	a = twice(i);

	i = o;
	return i;
}
