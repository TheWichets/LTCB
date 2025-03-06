#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    double x=1.0;
    double sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        x*=i;
        sum+=(1.0/x);
    }
    printf("%.10f", sum);
    return 0;
}
 
