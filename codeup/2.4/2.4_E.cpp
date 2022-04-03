#include<cstdio>
int main(){
    int sum = 0, N = 0;
    for (int i = 1;; i++)
    {
        if (sum > 1000)
        {
            N = i-1;
            break;
        }
        sum += i;
        
    }
    printf("%d\n", N);
    return 0;
}