#include<cstdio>
#include<cstring>
int main(){
    char s1[20],s2[20];
    scanf("%s", s1);
    scanf("%s", s2);
    int sum = 0;
    int min = strlen(s1) > strlen(s2) ? strlen(s2) : strlen(s1);
    //三元运算符：问号前面的位置是判断的条件，判断结果为bool型，为true时调用表达式1，为false时调用表达式2。
    for (int  i = 0; i < min; i++)
    {
        sum += (s1[i] - s2[i]);   
    }
    printf("%d",sum);
    return 0;
}