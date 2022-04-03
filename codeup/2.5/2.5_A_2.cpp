#include<cstdio>
int main(){
    //从后往前，如果插入的数小，就继续往前，后面的数后移。
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp = a[9], pos = 8;
    while (a[pos] > temp)
    {
        a[pos+1] = a[pos];
        pos--;
    }
    a[pos+1] = temp; 
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}