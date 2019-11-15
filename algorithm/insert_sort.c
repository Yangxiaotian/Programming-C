//
//  insert_sort.c
//  Programming-C
//
//  Created by 杨笑天 on 2019/10/15.
//  Copyright © 2019 杨笑天. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void insertSort(int *A, int n)
{
    for(int i=1; i<n; i++)
    {
        int key = A[i];
        int j = i-1;
        while(j >= 0 && key < A[j])
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
void play(void)
{
    int n;
    printf("请输入数组大小：");
    scanf("%d", &n);
    int *A = (int*)malloc(sizeof(int)*n);
    printf("请输入数据以空格或换行分隔：\n");
    for(int i=0; i<n; i++)
        scanf("%d", A+i);
    //A = {5,2,1,3,2};
    //A[0]=5, A[1]=2, A[2]=1,A[3]=3,A[4]=4;
    insertSort(A, n);
    for(int i=0; i<n; i++)
        printf("%d\t", A[i]);
}


