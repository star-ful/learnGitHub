#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max,biao;
#define N   30
int main()
{
    int a[N] = {77,1,3,9,4,6,5,2,10,8};
    max = a[0];

    srand(time(NULL));
    for(int i = 0;i < N;++i){
        a[i] = rand() % 100;
    }
    for(int i = 0;i< N;++i){
        if(max < a[i]) {
            biao = i;
            max = a[i];
        }
    }
    printf("最大值：%d\n下标:%d \n",max,biao);
    return 0;
}