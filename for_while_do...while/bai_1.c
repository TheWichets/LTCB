#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, d, sum=0;
    for (i=0; i <10; i++){
        scanf("%d", &d);
        sum+=d;
    }
    printf("%d", sum);
    return 0;
}
