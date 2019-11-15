#include <stdio.h>
#include <stdlib.h>
int partition(int *A, int p, int r)
{
    int key = A[r];
    int i = p-1;
    for(int j = p; j < r; j++)
    {
        if(A[j] < x)
        {
            int temp = A[i++];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    A[r] = A[i+1];
    A[i+1] = key;
    return i+1;
}
void quickSort(int *A, int p, int r)
{
    if(p < r)
    {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

void play(void)
{
    int n;
    printf("请输入数据个数：");
    scanf("%d", &n);
    int *A = (int *)malloc(sizeof(int)*n);
    printf("请输入数据：");
    for(int i = 0; i < n; i++)
        scanf("%d", A+i);
    quickSort(A, 0, n-1);
    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);
}
