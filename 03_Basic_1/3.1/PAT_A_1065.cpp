#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        long long res = a + b;  //res存放a+b的结果
        bool flag;
        if (a > 0 && b > 0 && res < 0) flag = true;     //正溢出
        else if(a < 0 && b < 0 && res >= 0) flag = false;   //负溢出
        else if(res > c) flag = true;
        else flag = false;
        if (flag == true)
        {
            printf("Case #%d: true\n", i+1);
        }
        if (flag == false)
        {
            printf("Case #%d: false\n", i+1);
        }
    }
    
    return 0;
}
