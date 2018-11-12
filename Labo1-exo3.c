#include <stdio.h>
#include <limits.h>

int main()
{
    printf("%d\n", 8*sizeof(long int));
    printf("the max value is %d\n", LONG_MAX);
    printf("the min value is %d\n", LONG_MIN);
    return 0;
}