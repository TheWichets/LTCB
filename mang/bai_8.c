#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void NhapMang(int *mang, int len)
{
    int i;
    for (i=0; i<len; i++)
    {
        scanf("%d", &mang[i]);
    }
}

void SapXep(int *a, int len)
{
    int i, j;
    for (i=len-1; i>0; i--){
        for (j=0 ; j<i; j++){
            if (a[j]>a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

int *GhepMang(int *mang1, int len1, int *mang2, int len2)
{
    int i=0, j=0, k=0;
    int len = len1 +len2;
    int *mangMoi = (int*)malloc(len*sizeof(int));
    while (j<len1 && k<len2)
    {
        if (mang1[j]<mang2[k])
        {
            mangMoi[i++]=mang1[j++];
        }
        else
        {
            mangMoi[i++]=mang2[k++];
        }
    }
    while (j<len1)
    {
        mangMoi[i++]=mang1[j++];
    }
    while (k<len2)
    {
        mangMoi[i++]=mang2[k++];
    }
    return mangMoi;
}

void printMang(int a[], int len)
{
  for (int i=0; i<len; i++){
    printf("%d ",a[i]);
  }
}

int main()
{
    freopen("/home/cao/Documents/input", "r", stdin);
    int len1, len2;
    printf("Nhap do dai mang 1: "); scanf("%d", &len1);
    int *mang1=(int*)malloc(len1*sizeof(int));
    printf("Nhap mang 1:");
    NhapMang(mang1, len1);
    SapXep(mang1, len1);

    printf("Nhap do dai mang 2: "); scanf("%d", &len2);
    int *mang2=(int*)malloc(len2*sizeof(int));
    printf("Nhap mang 2: ");
    NhapMang(mang2, len2);
    SapXep(mang2, len2);

    int *mangMoi = GhepMang(mang1, len1, mang2, len2);
    printMang(mangMoi, len1+len2); 
}