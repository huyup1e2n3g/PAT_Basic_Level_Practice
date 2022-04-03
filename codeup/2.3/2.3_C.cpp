#include<cstdio>
int main(){
    double a,b,c;
    double ma, mb, mc;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a<=b)
        if(a<=c){
            ma = a;
            if(b<=c){
                mb = b;
                mc = c;
            }
            else{
                mb = c;
                mc = c;
            }
        }     
        else{
            ma = c;
            mb = a;
            mc = b;
        }         
    else{
        if(b<=c){
            ma = b;
            if(a<=c){
                mb = a;
                mc = c;
            }
            else{
                mb = c;
                mc = a;
            }
        }
        else{
            ma = c;
            mb = b;
            mc = a;
        }
    }
    printf("%.2f %.2f %.2f\n", ma, mb, mc);
    return 0;
}