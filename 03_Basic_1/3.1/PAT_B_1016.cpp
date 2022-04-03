#include<cstdio>
long long cal(long long a, long long da)
{
    long long total = 0;
    while (a != 0)
    {
        if(a % 10 == da)
        {
            total = da + total * 10;
        }
        a = a / 10;
    }
    return total;
}

int main(){
    long long a, b, da, db;
    scanf("%lld %lld %lld %lld\n", &a , &da, &b, &db);
    printf("%lld", cal(a,da) + cal(b,db));
    return 0;
}