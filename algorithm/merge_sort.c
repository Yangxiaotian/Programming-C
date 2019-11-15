#include <stdio.h>
#include <stdlib.h>
void merge(int *A, int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    int *L = (int *)malloc(sizeof(int)*n1);
    int *R = (int *)malloc(sizeof(int)*n2);
    int i, j, k=p;
    for(i = 0; i < n1; i++)
        L[i] = A[p+i];
    for(j = 0; j < n2; j++)
        R[j] = A[q+j+1];
    i = j = 0;
    while(i < n1 && j < n2)
    {
        if(L[i] < R[j])
            A[k++] = L[i++];
        else A[k++] = R[j++];
    }
    while(i < n1)
        A[k++] = L[i++];
    while(j < n2)
        A[k++] = R[j++];
}
void mergeSort(int *A, int p, int r)
{
    if(p < r)
    {
        int q = (p+r)/2;
        mergeSort(A, p, q);
        mergeSort(A, q+1, r);
        merge(A, p, q, r);
    }
}

void play(void)
{
    int n;
    printf("数据个数: ");
    scanf("%d", &n);
    printf("输入数据: \n");
    int *A = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", A+i);
    mergeSort(A, 0, n-1);
    for(int i = 0; i < n; i++)
        printf("%d\t", A[i]);
}

        
