#include<cstdio>
#include<cstring>
int main(){
    char str[100], ans[40][40];
    gets(str);
    int N = strlen(str);    //获取长度
    int n1 = (N + 2) / 3, n3 = n1, n2 = N + 2 - n1- n3; //公式
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            ans[i][j] = ' ';    //初始化，将ans数组全部赋为空格
        }
    }
    int pos = 0;    //pos从0开始使用str数组
    for (int i = 1; i <= n1; i++)
    {
        ans[i][1] = str[pos++]; //从上往下赋值左侧n1个字符
    }
    for (int j = 2; j <= n2; j++)
    {
        ans[n1][j] = str[pos++]; //从坐往右赋值底部n2 - 1个字符
    }
    for (int i = n3 - 1; i >= 1; i--)
    {
        ans[i][n2] = str[pos++]; //从下往上赋值左侧n3 - 1个字符
    }
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            printf("%c", ans[i][j]);    //输出ans数组
        }
        printf("\n");
    }
    return 0;
}