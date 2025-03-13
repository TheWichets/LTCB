#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double so;
    int index;
} So;

void nhapMang(So* x, int len){
    for (int i=0; i<len; i++)
    {
        scanf("%lf", &x[i].so);
        x[i].index = i;
    }
}

So Max(So* x, int len){
    So max;
    max.index=x[0].so; 
    max.so=x[0].index;
    for (int i=1; i<len; i++){
        if (x[i].so > max.so){
            max.so = x[i].so;
            max.index = x[i].index;
        }
    }
    return max;
}

So Min(So* x, int len){
    So min;
    min.index=x[0].so; 
    min.so=x[0].index;
    for (int i=1; i<len; i++){
        if (x[i].so < min.so){
            min.so = x[i].so;
            min.index = x[i].index;
        }
    }
    return min;
}

int main(){
    int n;
    printf("Nhap so phan tu trong mang:");
    scanf("%d", &n);
    So *x;
    x=(So*)malloc(n*sizeof(So));
    nhapMang(x, n);
    printf("Phan tu lon nhat cua mang la %lf, index = %d\n", Max(x, n).so, Max(x, n).index);
    printf("Phan tu nho nhat cua mang la %lf, index = %d\n", Min(x, n).so, Min(x, n).index);
    free(x);
    return 0;
}
