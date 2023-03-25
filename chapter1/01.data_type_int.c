#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    short int short_int = 0;
    int i = 0;
    long long_int = 0;
    long long longlong_int = 0;

    unsigned int unsigned_int = 123;
    unsigned long unsigned_long = 234;

    
    size_t sizeof_int = sizeof(int);
    
    // d = decimal
    // x = hex
    // o = oct
    // %hd short decimal
    // %hu unsinged short int 
    // %d decimal
    // %ld long decimal
    // %lld long long decimal
    printf("short int: %lu\n", sizeof(unsigned short int));
    printf("int: %lu\n", sizeof(unsigned int));
    printf("long int: %lu\n", sizeof(unsigned long int));
    printf("long long int: %lu\n", sizeof(unsigned long long int));

    printf("max int %d, min %d\n", INT_MAX, INT_MIN);
    printf("usingned max int %u, usingned min %u\n", UINT_MAX, 0);
    return 0;
}
