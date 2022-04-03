#include<cstdio>
#include<cstring>
int main(){
    char a[3][10];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", a[i]);
    }
    int max = 0;
    for (int i = 1; i < 3; i++)
    {
        if (strcmp(a[max], a[i]) <= 0)
        {
            max = i;
        }
    }
    printf("%s", a[max]);
    return 0;
}