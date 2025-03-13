#include <stdio.h>
#include <stdlib.h>

typedef enum{
    DUONG,
    AM,
    KHONG_CAN,
} Dau;

int Tong(int *x, int len, Dau dau) 
{
    int total=0;
    switch(dau){
        case DUONG:
            for (int i=0; i<len; i++){
                if (x[i]>0){
                    total+=x[i];
                }
            }
            break;
        case AM:
            for (int i=0; i<len; i++){
                if (x[i]<0){
                    total+=x[i];
                }
            }
            break;
        default:
            for (int i=0; i<len; i++){
                total+=x[i];
            }
            break;
    }
    return total;
}

double TBC(int *x, int len, Dau a)
{
    double TBC=0;
    int n=0;
    switch (a){
        case DUONG:
            for (int i=0; i<len; i++){
                if (x[i]>0){
                    n++;
                }
            }
            break;
        case AM:
            for (int i=0; i<len; i++){
                if (x[i]<0){
                    n++;
                }
            }
            break;
        default:
            n=len;
    }
    TBC=(double)Tong(x, len, a)/(double)n;
    return TBC;
}

void nhapMang(int* x, int len){
    for (int i=0; i<len; i++)
    {
        scanf("%d", &x[i]);
    }
}

int main(){
    int n;
    printf("Nhap so phan tu trong mang:");
    scanf("%d", &n);
    int *x;
    x=(int*)malloc(n*sizeof(int));
    nhapMang(x, n);
    printf("Tong cac so nguyen duong = %d\n" ,Tong(x, n, DUONG));
    printf("Tong cac so nguyen am = %d\n" ,Tong(x, n, AM));
    printf("Trung binh cong cua ca mang = %lf\n", TBC(x, n, KHONG_CAN));
    printf("Trung binh cong cua so nguyen duong = %lf\n", TBC(x, n, DUONG));
    printf("Trung binh cong cua so nguyen am = %lf\n", TBC(x, n, AM));
    free(x);
    return 0;
}
