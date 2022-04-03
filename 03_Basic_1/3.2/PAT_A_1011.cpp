#include<cstdio>
char game[3] = {'W', 'T', 'L'};
int main(){
    double a[3][3] = {}, max[3] = {0.0};
    int max_i[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%lf", &a[i][j]);
            if (a[i][j] > max[i])
            {
                max[i] = a[i][j];
                max_i[i] = j;
            }
        }
    }
    double win = 1.0;
    win = (max[0] * max[1] * max[2] * 0.65 - 1) * 2;
    printf("%c %c %c %.2f\n", game[max_i[0]], game[max_i[1]], game[max_i[2]], win);
    return 0;
}