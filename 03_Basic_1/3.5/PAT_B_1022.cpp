#include<cstdio>
int main(){
    int a,b,d;
    scanf("%d%d%d", &a, &b, &d);
    int ab = a + b;
    int ans[31], num = 0;
    if (ab == 0)
    {
        printf("%d", ab);
    }
    else
    {
        while (ab != 0)
        {
            ans[num] = ab % d;
            ab = ab / d;
            num++;
        }
        for (int i = num - 1; i >= 0; i--)
        {
            printf("%d", ans[i]);
        }    
    }
    return 0;
}