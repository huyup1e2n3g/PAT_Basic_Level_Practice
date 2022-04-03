#include<cstdio>
int main(){
    int n, a, b, c, d;
    int na = 0, nb = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if ((b != a + c) && (d == a + c))
        {
            na++;
        }
        if ((b == a + c) && (d != a + c))
        {
            nb++;
        }
    }
    printf("%d %d\n", na, nb);
    return 0;
}