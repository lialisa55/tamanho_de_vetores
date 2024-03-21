#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n;
    scanf("%lld", &n);

    printf("char: %lld\n", (sizeof(char) * (size_t)n));
    printf("int: %lld\n", sizeof(int) * (size_t)n);
    printf("double: %lld\n", sizeof(double) * (size_t)n);

    return 0;
}
