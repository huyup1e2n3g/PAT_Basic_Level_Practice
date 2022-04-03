#include<cstdio>
int school[100000] = {0};
int main(){
    int n;
    int max_score = -1, max_score_id = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int score, id;
        scanf("%d %d", &id, &score);
        school[id] += score;
    }
    for (int i = 1; i <= n; i++)
    {
        if (school[i] > max_score)
        {
            max_score = school[i];
            max_score_id = i;
        }
    }
    printf("%d %d\n", max_score_id, max_score);
    return 0;
}