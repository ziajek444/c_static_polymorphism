#include "prototyp.h"

static int add(int a, int b)
{
    return a*b;
}

int wrapped_add3(int a, int b)
{
    return add(a,b);
}
