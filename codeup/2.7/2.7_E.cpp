#include<cstdio>
int* Return_Min_Location(int a[])
{
    int min = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
    }
    return &a[min]; //返回的是地址，所以函数用int*定义
}
int* Return_Max_Location(int a[])
{
    int max = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
    }
    return &a[max]; //返回的是地址，所以函数用int*定义
}

void swap(int *a, int *b)
{   
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int *p, *q;
    p = Return_Min_Location(a); //获得数组a最小值的地址
    q = Return_Max_Location(a); //获得数组a最大值的地址
    swap(p, &a[0]);
    swap(q, &a[9]);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}