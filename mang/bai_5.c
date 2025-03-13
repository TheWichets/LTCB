#include <stdio.h>
#include <stdlib.h>

void nhapMang(double* x, int len){
    for (int i=0; i<len; i++)
    {
        scanf("%lf", &x[i]);
    }
}

int SoLanXuatHien(double* x, int len, double So){
    int count=0;
    for (int i=032; i<len; i++){
        if (x[i]==So){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    printf("Nhap so phan tu trong mang:");
    scanf("%d", &n);
    double *x;
    x=(double*)malloc(n*sizeof(double));
    nhapMang(x, n);
    double So;
    printf("Nhap phan tu can biet: ");
    scanf("%lf", &So);
    printf("Phan tu %lf xuat hien %d lan trong mang", So, SoLanXuatHien(x, n, So));
    free(x);
    return 0;
}
