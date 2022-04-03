#include<cstdio>
int main(){
    //注意行数为列数的50%并四舍五入
    int row, col;
    char c;
    scanf("%d %c", &col, &c);
    if (col % 2 == 0) row = col / 2;
    else row = col / 2 + 1;
    for (int i = 0; i < col; i++)
    {
        printf("%c", c);
    }
    printf("\n");
    for (int i = 0; i < row-2; i++)
    {
        printf("%c", c);
        for (int i = 0; i < col-2; i++)
        {
            printf(" ");
        }
        printf("%c\n", c);
    }
    for (int i = 0; i < col; i++)
    {
        printf("%c", c);
    }
    printf("\n");
    return 0;
}