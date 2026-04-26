#include <stdio.h>
#include <windows.h>


//获取数组
void get_table(int* table,int length)
{
    for(int i = 0;i<length;i++)
    {
        printf("请输入你的数字(第%d个)\n",i);
        scanf("%d",&table[i]);
    }
}


//打印数组
void print_table(int table[10])
{
    for(int i = 0;i<10;i++)
    {
        printf("%d ",table[i]);
    }
    printf("\n");
}


//实现直接插入排序
void Straight_Insertion_Sort(int* table,int length)
{
    int cur,before;
    int temp;
    //循环遍历无序数组
    for(cur = 1;cur<length;cur++)
    {
        //如果比较数字第一位小于有序数组最后一位
        if(table[cur]<table[cur-1])
        {
            //暂存数字
            temp = table[cur];
            //循环找到插入位置
            for(before = cur-1;before>=0&&table[before]>temp;before--)
            {
                //如果数字比他大，则后移
                table[before+1] = table[before];
            }
            //放入该位置
            table[before+1] = temp;
        }
    }
}

//实现折半插入排序



int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int receive_table[10] = {0};
    //求数组长度
    int length = sizeof(receive_table)/sizeof(receive_table[0]);

    //获取数组
    get_table(receive_table,length);
    printf("排序前数组如下:\n");
    print_table(receive_table);

    Straight_Insertion_Sort(receive_table,length);
    printf("排序后数组如下:\n");
    print_table(receive_table);
    return 0;
}