#include<cstdio>
//不知道为什么用char字符串无法通过，改成string字符串后就可以。

struct Student
{
    char name[10];
    char id[10];
    int score;
}temp, ans_max, ans_min;

int main(){
    int n;
    ans_max.score = -1, ans_min.score = 101;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d", temp.name, temp.id, &temp.score);
        if (temp.score > ans_max.score) 
        {
            ans_max = temp;
        }
        if (temp.score < ans_min.score) 
        {
            ans_min = temp;
        }
    }
    printf("%s %s\n", ans_max.name, ans_max.id);
    printf("%s %s\n", ans_min.name, ans_min.id);
    return 0;
}