#include<cstdio>
#include<cstring>
struct student
{
    int num;
    char name[20];
    int score[3];
    double avg;
}stu[10];

double avg(int n)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum += stu[i].score[n];
    return double(sum) / 10;
}

int main(){
    for (int i = 0; i < 10; i++)
    {
        scanf("%d %s", &stu[i].num, stu[i].name);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &stu[i].score[j]);
        }
        stu[i].avg = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f ", avg(i));
    }
    printf("\n");
    int max_i = 0;
    for (int i = 0; i < 10; i++)
    {
        if (stu[i].avg > stu[max_i].avg)
        {
            max_i = i;
        }
    }
    printf("%d %s %d %d %d\n", stu[max_i].num, stu[max_i].name, stu[max_i].score[0], stu[max_i].score[1], stu[max_i].score[2]);
    return 0;
}