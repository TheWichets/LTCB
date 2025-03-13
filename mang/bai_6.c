#include <stdio.h>
#include <stdlib.h>

void nhapMang(double* x, int len){
    for (int i=0; i<len; i++)
    {
        scanf("%lf", &x[i]);
    }
}

int main(){
    int n;
    printf("Nhap so phan tu trong mang:");
    scanf("%d", &n);
    double *x;
    x=(double*)malloc(n*sizeof(double));
    nhapMang(x, n);
    for(int i=0; i<n; i++){
        if(x[i]<0){
            x[i]=0;
        }
    }
    return 0;
}
