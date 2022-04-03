#include<cstdio>
void compare(int* a, int* b)
{
    if (*a >= *b)
    {
        printf("%d %d\n", *a, *b);
    }
    else
    {
        printf("%d %d\n", *b, *a);
    }
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int* p1 = &a;
    int* p2 = &b;
    compare(p1, p2);
    return 0;
}