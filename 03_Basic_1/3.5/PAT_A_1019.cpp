#include<cstdio>
int main(){
    int n, b;
    scanf("%d %d", &n, &b);
    int ans[40], num = 0;
    while (n != 0)
    {
        ans[num] = n % b;
        n = n / b;
        num++;
    }
    int flag = 0;
    for (int i = 0; i <= (num - 1)/2; i++)
    {
        if (ans[i] != ans[num-1-i])
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }   
    }
    if (flag == 0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    for (int i = num - 1; i >= 0; i--)
    {
        printf("%d%s", ans[i], i == 0 ? "" : " ");
    }
    return 0;
}