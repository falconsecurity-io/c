#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';                     // single character       %c
    char b[] = "Rob";                // array of characters     %s

    float c = 3.141592;              // 4 bytes (6-7 digits)    %f
    double d = 3.141592653589793;    // 8 bytes (15-16 digits)  %lf

    bool e = true;                   // 1 byte (true or false)  %d

    char f = 120;                    // 1 byte (-128 to +127)   %d or %c
    unsigned char g = 255;           // 1 byte (0 to 255)       %d or %c

    short h = 32767;                 // 2 bytes (-32,768 to 32,767)       %d
    unsigned short i = 65535;        // 2 bytes (0 to 65,535)             %d

    int j = 2147483647;              // 4 bytes (-2.14B to +2.14B)        %d
    unsigned int k = 4294967295;     // 4 bytes (0 to 4.29B)              %u

    long long int l = 9223372036854775807;               // 8 bytes      %lld
    unsigned long long int m = 18446744073709551615U;     // 8 bytes      %llu

    // Print values
    printf("char a: %c\n", a);
    printf("char b: %s\n", b);
    printf("float c: %f\n", c);
    printf("double d: %lf\n", d);
    printf("bool e: %d\n", e);
    printf("char f: %d\n", f);
    printf("unsigned char g: %d\n", g);
    printf("short h: %d\n", h);
    printf("unsigned short i: %d\n", i);
    printf("int j: %d\n", j);
    printf("unsigned int k: %u\n", k);
    printf("long long int l: %lld\n", l);
    printf("unsigned long long int m: %llu\n", m);

    return 0;
}
