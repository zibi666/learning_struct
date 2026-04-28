#include <stdio.h>
#include <array_utils.h>



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

    int receive_table[10] = {0};
    //求数组长度
    int length = sizeof(receive_table)/sizeof(receive_table[0]);

    //获取数组
    get_table(receive_table,length);
    printf("before sort:\n");
    print_table(receive_table,length);

    Straight_Insertion_Sort(receive_table,length);
    printf("after sort:\n");
    print_table(receive_table,length);
    return 0;
}