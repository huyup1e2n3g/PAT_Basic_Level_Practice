#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[1010];
    scanf("%s", s);
    int ans[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        ans[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (ans[i] != 0)
        {
            printf("%d:%d\n", i, ans[i]);
        }
    } 
    return 0;
}