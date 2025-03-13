#include <stdio.h>
#include <stdlib.h>

void printMangNguoc(int a[], int len)
{
  for (int i=len-1; i>=0; i--){
    printf("%d ",a[i]);
  }
}
int main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    for (int i=0; i<10; i++){

        printf("%d ",x[i]);
    }
    printMangNguoc(x, 10);
    return 0;
}
