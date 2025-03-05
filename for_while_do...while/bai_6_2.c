#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, sum=0;
    scanf("%d", &n);
	for (i=1; i<=n; i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if(sum==n*2){
        printf("%d la so hoan hao\n", n);
    } else {
        printf("%d khong la so hoan hao\n", n);
    }
    return 0;
}
