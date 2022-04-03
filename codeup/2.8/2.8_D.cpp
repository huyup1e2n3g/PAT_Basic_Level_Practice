#include<cstdio>
#include<cstring>
struct student
{
    int num;
    char name[20];
    int score1;
    int score2;
    int score3;
}stu[5];

void input()
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %d %d %d", &stu[i].num, stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);
    }
}

void print()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d %s %d %d %d\n", stu[i].num, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3);
    }
}
int main(){
    input();
    print();
    return 0;
}