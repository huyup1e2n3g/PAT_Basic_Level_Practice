#include<cstdio>
int main(){
    int n,a;
    scanf("%d", &n);
    int ans[5] = {0};
    int count[5] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a % 5 == 0 && a % 2 == 0) 
        {
            ans[0] += a;
            count[0]++;
        }
        if (a % 5 == 1) 
        {
            count[1]++;
            ans[1] = ans[1] + (count[1] % 2 == 0 ? -a : +a);
        }
        if (a % 5 == 2) 
        {
            count[2]++;
            ans[2]++;
        }
        if (a % 5 == 3) 
        {
            ans[3] = ans[3] + a;
            count[3]++;
        }
        if (a % 5 == 4)
        {
            if( a > ans[4])
            {
                ans[4] = a;
            }
            count[4]++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (count[i] == 0)
        {
            printf("N%s", i == 4 ? "" : " ");
        }
        else if (i == 3)
        {
            printf("%.1lf ", (double)ans[3]/count[3]);
        }
        else
        {
            printf("%d%s", ans[i],i == 4 ? "" : " ");
        }
    }
    return 0;
}