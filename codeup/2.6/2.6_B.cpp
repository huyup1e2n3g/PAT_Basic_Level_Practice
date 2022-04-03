#include<cstring>
#include<cstdio>
void vowels(char s1[])
{
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
        {
            printf("%c", s1[i]);
        }
    }
}

int main(){
    char s1[10];
    scanf("%s", s1);
    vowels(s1);
    return 0;
}