#include<cstdio>
#include<cstring>
struct person
{
    char name[20];
    int count;
}leader[3] = {{"Li", 0}, {"Zhang", 0}, {"Fun", 0}};
int main(){
    int n;
    scanf("%d", &n);
    char name[100][n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name[i]);

    }
    for (int i = 0; i < n; i++)
    {
        if(strcmp(name[i], leader[0].name) == 0 )
        {
            leader[0].count++;
        }
        else if (strcmp(name[i], leader[1].name) == 0)
        {
            leader[1].count++;
        }
        else if (strcmp(name[i], leader[2].name) == 0)
        {
            leader[2].count++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s:%d\n", leader[i].name, leader[i].count);
    }
    return 0;
}