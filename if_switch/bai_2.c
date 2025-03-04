#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, e, c, d, f;
    double m, x, y;
    printf("Nhap cac he so a, b, c, d, e, f: ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &e, &c, &d, &f);
    if ((a/c)==(b/d)&&(a/c)==(e/f)){
        printf("He phuong trinh co vo so nghiem");
    } else if ((a/c)==(b/d)&&(a/c)!=(e/f)){
        printf("He phuong trinh vo nghiem");
    } else {
        printf("He phuong trinh co nghiem duy nhat\n");
        m=a/c;
        y=(m*f-e)/(m*d-b);
        x=(e-b*y)/a;
        printf("x = %lf\ny = %lf", x, y);
    }
    return 0;
}
