#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int n;
    int a, b, c;
    a = 0;
    b = 1;
    scanf("%d", &n);
    if (n==1) {
        c=b;
    } else {
        for (i=2; i<=n; i++) {
            c=a+b;
            a=b;
            b=c;
        }
    }
    printf("%d\n", c);
    return 0;
}
 
 
 
