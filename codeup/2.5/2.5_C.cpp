#include<cstdio>
//杨辉三角
int main(){
    int count;
    const int n = 10;   //变量n在此处起到了限制输出行数的作用
    scanf("%d", &count);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d%c",arr[i][j], j == i ? '\n' : ' ');
        }
    }
    return 0;
}