#include <stdio.h>

int main()
{
    int a=0xffffff;
    a = a & ~(0x1ff<<15);
    printf("%0x",a);
}