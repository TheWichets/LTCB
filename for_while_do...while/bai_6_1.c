#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, a, b;
    scanf("%d %d", &a, &b);
    int product=a*b;
	while(b!=0){
        r=b;
        b=a%b;
        a=r;
    }
    printf("UCLN = %d\n", a);
    printf("BCNN = %d", product/a);
    return 0;
}
