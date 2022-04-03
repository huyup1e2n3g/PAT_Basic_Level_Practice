#include<cstdio>
struct Student
{
    char name[15];
    char gender;
    char id[15];
    int grade;
}ans, max_f, min_m;
int main(){
    int n;
    scanf("%d", &n);
    int min_grade = 101, max_grade = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %c %s %d", ans.name, &ans.gender, ans.id, &ans.grade);
        if (ans.gender == 'M')
        {
            if (ans.grade < min_grade)
            {
                min_grade = ans.grade;
                min_m = ans;
            }
        }
        if (ans.gender == 'F')
        {
            if (ans.grade > max_grade)
            {
                max_grade = ans.grade;
                max_f = ans;
            }
        }
    }
    if (max_grade == -1) printf("Absent\n");
    else printf("%s %s\n", max_f.name, max_f.id);
    if (min_grade == 101) printf("Absent\n");
    else printf("%s %s\n", min_m.name, min_m.id);
    if (max_grade == -1 || min_grade == 101) printf("NA\n");
    else printf("%d\n", max_grade - min_grade);
    return 0;
}