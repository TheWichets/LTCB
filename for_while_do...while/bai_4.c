#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, sum=0;
	for (i=1; i<=100; i++){
        if (i%2!=0){
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}
