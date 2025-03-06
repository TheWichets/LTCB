#include <stdio.h>
#include <stdlib.h>

int main() {
    	int i, d, sum=0;
	printf("Nhap 10 so nguyen bat ky");
    	for (i=0; i <10; i++){
        	scanf("%d", &d);
        	sum+=d;
    	}
    	printf("Sum = %d", sum);
    	return 0;
}
