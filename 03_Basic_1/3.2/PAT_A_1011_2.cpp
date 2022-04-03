#include<cstdio>
char game[3] = {'W', 'T', 'L'};
int main(){
    double ans = 1.0, max, a;
    int max_id;
    for (int i = 0; i < 3; i++)
    {
        max = 0.0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%lf", &a);
            if (a > max)
            {
                max = a;
                max_id = j;
            }
        }
        ans *= max;
        printf("%c ",game[max_id]);
    }
    printf("%.2f\n", (ans * 0.65 - 1) * 2);
    return 0;
}