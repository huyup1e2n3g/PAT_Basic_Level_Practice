#include<cstdio>
int main(){
    long long f[50];
    int n;
    scanf("%d", &n);
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= 50; i++)
    {
        f[i] = f[i-1]+f[i-2];
    }
    printf("%lld\n", f[n-1]);
    return 0;
}