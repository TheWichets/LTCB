#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    int x;
    scanf("%u", &n);
    printf("%u = ", n);
    for(x=32; x>1; x--) {
            if (x==2) {
                printf("%u%u", (n >> 1) & 1, (n) & 1);
            } else {
                printf("%u", (n >> (x-1)) & 1);
            }
    }
    printf(" = 0x%08X", n);
    printf(" = 0%o", n);
}
