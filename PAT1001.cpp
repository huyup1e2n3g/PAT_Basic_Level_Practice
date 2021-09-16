/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: YuPain
 * @Date: 2021-09-16
 */
#include<iostream>
using namespace std;

int main(){
    
    int step = 0;
    int n = 0;
    //cout << "请输入一个正整数n" << endl;
    cin >> n;
    
    while (n != 1) //注意运算符
    {
        if(n % 2 == 0) ////注意运算符
        {
            n = n / 2;
        }
        else
        {
            n = (3 * n + 1) / 2;
        }
        step++;
    }
    cout  << step << endl;
    return 0;
}
