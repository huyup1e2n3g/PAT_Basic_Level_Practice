#include<cstdio>
int main(){
    int a,b,c,d;
    int *p1 = &a, *p2 = &b, *p3 = &c, *p4 = &d;
    scanf("%d %d %d", &a, &b, &c);
    if (*p1 < *p2)
    {
        *p4 = *p1;
        *p1 = *p2;
        *p2 = *p4;
    }
    if (*p1 < *p3)
    {
        *p4 = *p1;
        *p1 = *p3;
        *p3 = *p4;
    }
    if (*p2 < *p3)
    {
        *p4 = *p2;
        *p2 = *p3;
        *p3 = *p4;
    }
    printf("%d %d %d\n", *p1, *p2, *p3);
    return 0;
}
