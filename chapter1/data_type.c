#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    short int short_int = 0;
    int i = 0;
    long int long_int = 0;
    long long longlong_int = 0;

    // %d decimal
    printf("short int: %d\n", sizeof(unsigned short int));
    printf("int: %d\n", sizeof(unsigned int));
    printf("long int: %d\n", sizeof(unsigned long int));
    printf("long long int: %d\n", sizeof(unsigned long long int));

    printf("max int %d, min %d\n", INT_MAX, INT_MIN);
    printf("usingned max int %u, usingned min %u\n", UINT_MAX, 0);
    return 0;
}
