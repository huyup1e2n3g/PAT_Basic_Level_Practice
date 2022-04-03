#include<cstdio>
#include<cstring>
int main(){
    char *a = "I love China!";
    int n;
    scanf("%d", &n);
    for (char *p = a+n; p < a + strlen(a); p++)
    {
        printf("%c", *p);
    }
    return 0;
}