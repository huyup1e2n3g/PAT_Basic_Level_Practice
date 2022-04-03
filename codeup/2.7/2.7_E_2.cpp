#include<cstdio>
//数组的指针用法
void into(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", p + i); //p + i地址等价于&a[i]
    }
}

void dispose(int *p)
{
    int min = 0;   
    //p为数组a的地址，p+0为数组a[0]的地址，p+i为数组a[i]的地址
    //*(p+0)=*p为地址中存放的值，即*p=a[0]的值，*(p+i)=a[i]的值
    for (int i = 0; i < 10; i++)
    {
        if (*(p+i) < *(p+min))
        {
            min = i;
        }
    }
    int temp1 = *(p+min);
    *(p+min) = *p;
    *p = temp1;
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (*(p+i) > *(p+max))
        {
            max = i;
        }
    }
    int temp2 = *(p+max);
    *(p+max) = *(p+9);
    *(p+9) = temp2;
}

void out(int *p)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
}

int main(){
    int a[10];
    int *p = a; //数组指针传递
    into(p);
    dispose(p);
    out(p);
    return 0;
}