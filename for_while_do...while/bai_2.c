#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i, d, flag=0;
    scanf("%d", &d);

    if (d==0||d==1){
        flag =1;
    }
    for (i=2; i<=n/2; ++i){
        if (d % i == 0){
            flag=0;
            break;
        }
    }
    if (flag==1){
        printf("Co");
    } else printf("Khong");
    return 0;
}
