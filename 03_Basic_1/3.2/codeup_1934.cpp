#include<cstdio>
const int maxn = 210;
int a[maxn];
int main(){
    int n, x;
    //int a[n];
    while ( scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        scanf("%d", &x);
        int k = 0;
        for (int k = 0; k < n; k++)
        {
            if (a[k] == x)
            {
                printf("%d\n", k);
                break;
            }
        }
        if (k == n)
        {
            printf("-1\n");
        }
    }
    return 0;
}