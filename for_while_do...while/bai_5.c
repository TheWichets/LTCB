#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
	printf("Nhap so n:");
    scanf("%d", &n);
	printf("Cac uoc cua %d la: ", n);
	for (i=1; i<=n; i++){
        if (n%i==0){
            printf("%d ", i);
        }
    }
    return 0;
}
