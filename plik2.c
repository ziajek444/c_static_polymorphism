#include "prototyp.h"

static int add(int a, int b)
{
    return (a+b)*2;
}

int wrapped_add2(int a, int b)
{
    return add(a,b);
}
