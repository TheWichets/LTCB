#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    //freopen("C:\\Users\\LENOVO\\Documents\\C\\input.txt", "r", stdin);
    int n, i;
    double sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum+=(1.0/i);
    }
    printf("%f", sum);
    return 0;
} 
