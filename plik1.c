#include "prototyp.h"

static int add(int a, int b)
{
    return a+b+10;
}

int wrapped_add1(int a, int b)
{
    return add(a,b);
}


