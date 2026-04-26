#include <stdio.h>
#include <windows.h>


//生成有序数组(1-100)
void set_table(int* table,int length)
{
    for(int i = 0;i<length;i++)
    {
        table[i] = i+1;
    }
}

int binary_search(int table[],int len,int* cnt,int target)
{
    //初始化指针,mid向下取整
    int low = 0,high = len-1,mid = (low+high)/2;
    while(low<=high)
    {
        mid = (low+high)/2;
        (*cnt)++;
        if(table[mid]<target)
        {
            low = mid+1;
        }
        else if(table[mid]>target)
        {
            high = mid-1;
        }
        else
        {
            return mid+1;
        }
    }
    return -1;
}



int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int receive_table[100] = {0};

    //寻找哪个数字
    int target = 0;
    //寻找了几次
    int count = 0;

    //求数组长度
    int length = sizeof(receive_table)/sizeof(receive_table[0]);

    //生成数组
    set_table(receive_table,length);

    printf("请输入你需要寻找的数字:\n");
    scanf("%d",&target);

    int result = binary_search(receive_table,length,&count,target);
    if(result<0)
    {
        printf("已为您寻找了:%d次,很抱歉没找到\n",count);
    }
    else
    {
        printf("已为您寻找了:%d次,位于第%d位\n",count,result);
    }
}