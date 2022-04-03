#include<cstdio>
#include<cstring>
struct 
{
    int mum;
    char name[10];
    char sex;
    char job;
    union{
        int sclass;
        char position[10];
    }category;
}stu[100];

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %c %c", &stu[i].mum, stu[i].name, &stu[i].sex, &stu[i].job);
        if (stu[i].job == 's')
        {
            scanf("%d", &stu[i].category.sclass);
        }
        else if (stu[i].job == 't')
        {
            scanf("%s", stu[i].category.position);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (stu[i].job == 's')
        {
            printf("%d %s %c %c %d\n", stu[i].mum, stu[i].name, stu[i].sex, stu[i].job, stu[i].category.sclass);
        }
        else if (stu[i].job == 't')
        {
            printf("%d %s %c %c %s\n", stu[i].mum, stu[i].name, stu[i].sex, stu[i].job, stu[i].category.position);
        }
    }
    return 0;
}