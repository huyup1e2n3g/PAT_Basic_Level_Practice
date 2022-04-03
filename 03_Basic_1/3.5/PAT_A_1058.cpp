#include<cstdio>
int main(){
    int a1, b1, c1;
    int a2, b2, c2;
    scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
    int ans[3] = {a1 + a2, b1 + b2, c1 + c2};
    if (ans[2] / 29 != 0)
    {
        ans[1] = ans[1] + ans[2] / 29;
        ans[2] = ans[2] % 29;
    }
    if (ans[1] / 17 != 0)
    {
        ans[0] = ans[0] + ans[1] / 17;
        ans[1] = ans[1] % 17;
    }
    printf("%d.%d.%d", ans[0], ans[1], ans[2]);
    return 0;
}