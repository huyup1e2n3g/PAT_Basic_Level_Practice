#include<cstdio>
int main(){
    int a,b;
    int *p1 = &a, *p2 = &b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", *p1 > *p2 ? *p1 : *p2, *p1 > *p2 ? *p2 : *p1);
    //采用三元运算符
    return 0;
}