#include<cstdio>
struct Person
{
    char name[10];
    int year;
    int month;
    int day;
}temp, old_person, young_person;

int age(int y, int m, int d)//计算日龄
{
    int dayAge;
    dayAge = (2014 - y) * 12 * 365 + (9 - m) * 30 + (6 - d);
    return dayAge;
}

int main(){
    int n, m = 0;
    int max_age = 0, min_age = 200 * 365 * 30;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d/%d/%d", temp.name, &temp.year, &temp.month, &temp.day);
        if (age(temp.year, temp.month, temp.day) <= 200 * 12 * 365 && age(temp.year, temp.month, temp.day) >= 0)
        {
            m++;
            if (age(temp.year, temp.month, temp.day) > max_age)
            {
                max_age = age(temp.year, temp.month, temp.day);
                old_person = temp;
            }
            if (age(temp.year, temp.month, temp.day) < min_age)
            {
                min_age = age(temp.year, temp.month, temp.day);
                young_person = temp;
            }
        }
    }
    if (m == 0) //考虑n=0时的格式
    {
        printf("%d\n", m);
    }
    else{
        printf("%d %s %s\n", m, old_person.name, young_person.name);
    }
    return 0;
}