#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
	printf("So chan tu 1 den 20 la:");
	for (i=1; i<=20; i++){
        if (i%2==0){
            printf("%d\t", i);
        }
    }
    return 0;
}
