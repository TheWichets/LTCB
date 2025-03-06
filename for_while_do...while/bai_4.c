#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, sum=0;
	printf("Tong cac so le tu 1 den 100 la ");
	for (i=1; i<=100; i++){
        if (i%2!=0){
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}
