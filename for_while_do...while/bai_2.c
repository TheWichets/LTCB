#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i, d, flag=0;
	printf("Nhap 1 so ");
    scanf("%d", &d);

    if (d==0||d==1){
        flag =0;
    }
    for (i=2; i<=sqrt(d); ++i){
        if (d % i == 0){
            flag=0;
            break;
        }
    }
    if (flag==1){
        printf("Co la so nguyen to");
    } else printf("Khong la so nguyen to");
    return 0;
}
