#include<cstdio>
int main(){
    int n,m,a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n\n", sum);
    }
    return 0;
}