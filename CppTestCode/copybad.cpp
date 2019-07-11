/*
 * copybad.cpp
 */
#include "CppTestCode.h"

int copybad() {
    char *a, *b;

    a = new char[10];
    b = a + 20;
    return 0;
}
