#include<cstdio>
const int maxn = 100010;
int school[maxn] = {0};
int main(){
    int n = 0;
    scanf("%d", &n);
    int id = 1, max = 0, max_id, score;
    //学校号id，最高分max，最高分学校号max_id，学校单条成绩score
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &id, &score);
        school[id] += score;
        if (school[id] > max)
        {
            max = school[id];
            max_id = id;
        }
    }
    printf("%d %d\n", max_id, max);
    return 0;
}