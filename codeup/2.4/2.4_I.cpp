#include<cstdio>
int main(){
    double f[20];
    double sum = 0;
    f[0] = 1;
    f[1] = 2;
    for (int i = 2; i <= 20; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    for (int i = 0; i < 20; i++)
    {
        sum += f[i+1] / f[i];
    }
    printf("%.6lf\n", sum);
    return 0;
}