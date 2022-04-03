#include<cstdio>
#include<cmath>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delt = b * b - 4 * a * c;
    if (a == 0)
        return 1;
    if (delt <= 0)
        return 1;
    else{
        double r1, r2;
        r1 = (-b + sqrt(delt))/(2 * a);
        r2 = (-b - sqrt(delt))/(2 * a);
        printf("r1=%7.2f\nr2=%7.2f", r1,r2);    //结果输出时，宽度占7位，其中小数部分2位。
    }
    return 0;
}