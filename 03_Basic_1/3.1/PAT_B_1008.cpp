#include<cstdio>
int main(){
    int a[110];
    int n, m;
    scanf("%d %d", &n, &m);
    m = m % n;  //修正m
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i + n - m]);
    }
    for (int i = 0; i < n - m; i++)
    {
        printf("%d%s", a[i], i == n - m - 1 ? "\n" : " ");
    }
    return 0;
}