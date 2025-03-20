#include <stdio.h>
#include <stdlib.h>

void NhapMang(double **matrix, int a, int b)
{
    for (int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%lf", &matrix[i][j]);
        }
    }
}

double **congMaTran(int a, int b, double **matran1, int x, int y, double **matran2)
{
    if (a != x || b != y)
    {
        return NULL;
    }

    double **matrixmoi = (double**)malloc(a * sizeof(double*));
    for (int i = 0; i<a; i++)
    {
        matrixmoi[i] = (double*)malloc(b *sizeof(double));
    }

    int i, j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            matrixmoi[i][j] = matran1[i][j] + matran2[i][j];
        }
    }
    return matrixmoi;
}

void printMatrix(int a, int b, double **matran)
{
    int i, j;
    for(i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            printf("%.2f ", matran[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a, b;
    printf("Nhap kich thuoc ma tran thu nhat a x b: ");
    scanf("%d %d", &a, &b);

    double **matrix1 = (double**)malloc(a * sizeof(double*));
    for (int i = 0; i<a; i++)
    {
        matrix1[i] = (double*)malloc(b *sizeof(double));
    }
    printf("Nhap ma tran 1: ");
    NhapMang(matrix1, a, b);

    int x, y;
    printf("Nhap kich thuoc ma tran thu hai x x y: ");
    scanf("%d %d", &x, &y);
    double **matrix2 = (double**)malloc(x * sizeof(double*));
    for (int i = 0; i<x; i++)
    {
        matrix2[i] = (double*)malloc(y * sizeof(double));
    }
    printf("Nhap ma tran 2: ");
    NhapMang(matrix2, x, y);

    double **matrixNew = congMaTran(a, b, matrix1, x, y, matrix2);

    if (matrixNew != NULL)
    {
        printMatrix(a, b, matrixNew);
    }
    else
    {
        printf("Kich thuoc hai ma tran khong khop nhau.\n");
    }

    for (int i = 0; i < a; i++)
    {
        free(matrix1[i]);
    }
    free(matrix1);

    for (int i = 0; i < x; i++)
    {
        free(matrix2[i]);
    }
    free(matrix2);

    if (matrixNew != NULL)
    {
        for (int i = 0; i < a; i++)
        {
            free(matrixNew[i]);
        }
        free(matrixNew);
    }
    return 0;
}