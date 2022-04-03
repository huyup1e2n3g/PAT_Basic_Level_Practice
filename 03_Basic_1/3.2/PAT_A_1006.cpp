#include<cstdio>
const int maxn = 1000;
int main(){
    int n;
    int id_b, id_l;
    char id[15][maxn];
    int hh_b,mm_b,ss_b,hh_l,mm_l,ss_l;
    int min_times = 24 * 3600, max_times = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d:%d:%d %d:%d:%d", id[i], &hh_b, &mm_b, &ss_b, &hh_l, &mm_l, &ss_l);
        if (hh_b * 3600 + mm_b * 60 + ss_b < min_times)
        {
            min_times = hh_b * 3600 + mm_b * 60 + ss_b;
            id_b = i;
        }
        if (hh_l * 3600 + mm_l * 60 + ss_l > max_times)
        {
            max_times = hh_l * 3600 + mm_l * 60 + ss_l;
            id_l = i;
        }
    }
    printf("%s %s\n", id[id_b], id[id_l]);
    return 0;
}