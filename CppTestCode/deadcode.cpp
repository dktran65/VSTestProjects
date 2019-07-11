/*
 * File: deadcode.cpp
 */
#include <iostream>
#include "CppTestCode.h"

using namespace std;

class Global {
	public:
	int j;
	static int func_X2(int i);
};

int Global::func_X2(int i) {
	return i*2;
}

Global *get_glob() {
	cerr << "Initializing..." << endl; 
	return (Global *) 0;
}

int deadcode() {
	get_glob()->func_X2(2);
	return 0;
}
