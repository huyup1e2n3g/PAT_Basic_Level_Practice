#include<cstdio>

//define定义符号常量
#define pi 3.14

//const常量
const double pi2 = 3.14;

//define定义语句或片段
#define ADD(a, b) ((a)+(b))


int main(){
    char c1 = 'z', c2 = 'j', c3 = 117;  //117是u的ASCII码值
    printf("%c%c%c\n", c1, c2, c3);
    
    int num1 = 1, num2 = 2;
    printf("%d\n\n%d\n", num1, num2);
    printf("%c", 7);    //ASCII码为7的字符是控制字符，并且是控制响铃功能的控制字符

    char str1[25] = "Wo ai de ren bu ai wo";
    char str2[25] = "so sad a story it is.";
    printf("%s, %s\n", str1, str2);

    bool flag1 = 0, flag2 = true;
    int a1 = 1, b1 = 1;
    printf("%d %d %d\n", flag1, flag2, a1==b1);

    //强制类型转换
    double r1 = 12.56;
    int a2 = 3, b2 = 5;
    printf("%d\n", (int)r1);
    printf("%d\n", a2 / b2);
    printf("%.1f\n", (double)a2 / (double)b2);

    //符号常量输出
    double r2 = 3;
    printf("%.2f\n", pi * r2 * r2);

    //const常量输出
    printf("%.2f\n", 2 * pi2 * r2);

    //define定义输出
    printf("%d\n", ADD(num1, num2));

    return 0;
}