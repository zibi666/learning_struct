//
// Created by zibi on 2026/4/27.
//
#include <stdio.h>
#include <array_utils.h>


int Partition(int table[],int low,int high) {
    int pivot = table[low];
    while (low<high) {
        while(low<high&&table[high]>=pivot)
            high--;
        table[low] = table[high];
        while(low<high&&table[low]<=pivot)
            low++;
        table[high] = table[low];
    }
    table[low] = pivot;
    return low;
}


void quick_sort(int table[],int low,int high) {
    if (low<high) {
        int pivotops = Partition(table,low,high);
        quick_sort(table,low,pivotops-1);
        quick_sort(table,pivotops+1,high);
    }
}


int main() {
    int receive_table[10] = {0};
    int length = sizeof(receive_table)/sizeof(receive_table[0]);
    //获取数组
    get_table(receive_table,length);
    printf("before sort:\n");
    print_table(receive_table,length);

    quick_sort(receive_table,0,length-1);

    printf("after sort:\n");
    print_table(receive_table,length);

    return 0;
}