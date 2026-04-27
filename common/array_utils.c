//
// Created by zibi on 2026/4/27.
//

#include <stdio.h>

//生成有序数组(1-100)
void set_table(int* table,int length)
{
    for(int i = 0;i<length;i++)
    {
        table[i] = i+1;
    }
}

//获取数组
void get_table(int* table,int length)
{
    for(int i = 0;i<length;i++)
    {
        printf("please write your number (%d)\n",i);
        scanf("%d",&table[i]);
    }
}

//打印数组
void print_table(int table[],int length)
{
    for(int i = 0;i<length;i++)
    {
        printf("%d ",table[i]);
    }
    printf("\n");
}

//交换函数
void swap(int* a,int* b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}