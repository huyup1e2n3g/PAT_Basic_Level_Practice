#include<cstdio>
#include<cstring>
void reverse(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c", a[strlen(a) - 1 - i]);
    }   
}
int main(){
    char a[10];
    scanf("%s", a);
    reverse(a);
    return 0;
}