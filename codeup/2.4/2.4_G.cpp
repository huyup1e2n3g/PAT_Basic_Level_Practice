#include<cstdio>
#include<cmath>
int main(){
    double PI = 0;
    int n = 1;
    for (int i = 1;;i++)
    {
        if(1/(2.0*i-1) < 1e-6)
        {
            break;
        }
        PI += 1/(2.0*i-1)*pow(-1.0,1.0*(i-1));
        n++;
    }   
    printf("PI=%10.8lf\n", 4*PI);
    return 0;
}