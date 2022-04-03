#include<cstdio>
int main(){
    int a[10],temp[10];
    int n;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    for (int i = 0; i < 9; i++)
    {
        if (a[i] > n) 
        {
            for (int j = 0; j < i; j++)
            {
                temp[j] = a[j];
            }
            temp[i] = n; 
            for (int j = i + 1; j < 10; j++)
            {
                temp[j] = a[j-1];
            }
            break;
        }
        else
        {
            for (int j = 0; j < 9; j++)
            {
                temp[j] = a[j];
            }
            temp[9] = n;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", temp[i]);
    }
    return 0;
}