#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[90];
    cin.getline(str, 90);
    int len = strlen(str);
    int r = 0, h = 0;   
    char ans[90][90];   //r行h列，1行存放1个单词
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            ans[r][h++] = str[i];
        }
        else
        {
            ans[r][h] = '\0';   //末尾是结束符
            r++;
            h = 0;
        }
        ans[r][h] = '\0';
    }
    for (int i = r; i >= 0; i--)
    {
        printf("%s", ans[i]);
        if(i > 0) printf(" ");
    }
    return 0;
}