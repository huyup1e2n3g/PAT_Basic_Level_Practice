#include<cstdio>
int main(){
    int r, b, g;
    scanf("%d %d %d", &r, &b, &g);
    char ans[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};
    printf("#%c%c%c%c%c%c", 
            ans[r / 13 % 13], ans[r % 13],
            ans[b / 13 % 13], ans[b % 13],
            ans[g / 13 % 13], ans[g % 13]);
    return 0;
}