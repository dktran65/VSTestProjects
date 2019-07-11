/*
 * File: readover.cpp
 */
#include <stdlib.h>
#include "CppTestCode.h"


class small
{
public:
    int x;
};

class big : public small
{
public:
    double y;
};

int readover()
{
    small *var1;
    big *var2;
    double d;
    
    var1 = new small;
	d = var1->x;
	
    var2 = (big *) var1;
   /*  d = var2->y; */
    return (0);
}
