#include<cstdio>
#include<cstring>
int main(){
    char str[20];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            //字母表中第i个字母变成第（26-i+1)个字母
            //A～Z，65～90；a～z，97～122
            str[i] = (26 - (str[i] - 64) + 1) + 64;   
            //i的ASCII码值是 str[i] - 64，如A的ASCII码值为65，i = 65 - 64 = 1，即A为字母表中第1个字母。
            //最后把64加回去得到字母对应的ASCII码值。
        }
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = (26 - (str[i] - 96) + 1) + 96;  
        }
    }
    printf("%s", str);
    return 0;
}