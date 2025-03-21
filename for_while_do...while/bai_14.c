#include <stdio.h>
#include <stdlib.h>

int main()
{
    double GDP, rate;
    int year = 2014;
    printf("Nhap GDP nam 2014: ");
    scanf("%lf", &GDP);
    printf("Nhap toc do tang truong(%%): ");
    scanf("%lf", &rate);

    printf("%-5s %-10s\n", "Nam", "GDP");
    printf("%-5d %-10lf\n", year++, GDP);
    double dupGDP = GDP;
    do
    {
        dupGDP += dupGDP*rate/100;
        printf("%-5d %-10lf\n", year++, dupGDP);
    } while (dupGDP<=2*GDP);
    return 0;
}