#include<cstdio>
int main(){
    int a[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
        //简便的写法，用三元运算符
        //printf("%d%c", a[j][i], j < 1 ? ' ' : '\n' );
    }
    return 0;
}