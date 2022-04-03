#include<cstdio>
int main(){
    int n,a;
    while (scanf("%d", &n) != EOF)
    {   
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            sum += a;
        } 
        printf("%d\n", sum);
    }
    return 0;
}