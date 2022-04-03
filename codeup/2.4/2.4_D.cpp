#include<cstdio>
int main(){
    int N = 0, sum = 0;
    scanf("%d", &N);
    for (int i = 0;; i++)
    {
        if (i > N)
        {
            break;
        }
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}