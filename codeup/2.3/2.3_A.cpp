#include<cstdio>
#include<cmath>
int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delt;
    delt = b * b - 4 * a * c;
    if (!a)
        return 0;
    if (delt < 0)
        printf("No real roots!");
    else{
        double r1, r2;
        r1 = (-b - sqrt(delt))/ (2 * a);
        r2 = (-b + sqrt(delt))/ (2 * a);
        printf("r1=%7.2f\nr2=%7.2f\n", r1, r2);
    }
    return 0;
}