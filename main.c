#include <stdio.h>
#include <stdlib.h>
#include "prototyp.h"

static int add(int a, int b) { return 0; }

int main()
{
    printf("Hello world!\r\n");
    printf("%d\r\n",add(1,2));
    printf("%d\r\n",wrapped_add1(1,2));
    printf("%d\r\n",wrapped_add2(1,2));
    printf("%d\r\n",wrapped_add3(1,2));
    return 0;
}
