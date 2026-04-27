#include <stdio.h>
#include <array_utils.h>



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
    int receive_table[100] = {0};

    //寻找哪个数字
    int target = 0;
    //寻找了几次
    int count = 0;

    //求数组长度
    int length = sizeof(receive_table)/sizeof(receive_table[0]);

    //生成数组
    set_table(receive_table,length);

    printf("please write which number to find(1-100):\n");
    scanf("%d",&target);

    int result = binary_search(receive_table,length,&count,target);
    if(result<0)
    {
        printf("find_count:%d , but we cannot find\n",count);
    }
    else
    {
        printf("find_count:%d , it at %d\n",count,result);
    }
}