/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: YuPain
 * @Date: 2021-09-16
 */
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str[100]; //字符串数组
    cin >> str; //从控制台读入数据
    int length = strlen(str); //获取字符串长度
    int sum = 0;
    //取出各位求出数字各位之和
    for (int i = 0; i < length; i++)
    {
        sum = str[i] - '0' + sum;
    }

    //cout << sum << endl; 

    int num_length = 0, ans[10];
    //取各位之和的每一位存到数组ans当中，倒序存储
    while (sum != 0)
    {
        ans[num_length] = sum % 10;
        num_length++;
        sum = sum / 10;
    }

    //数字转字符串数组
   char num_to_char[10][5] = {
       "ling","yi","er","san","si","wu","liu","qi","ba","jiu"
    };

    for (int i = num_length -1; i >= 0; i--)
    {
        cout << num_to_char[ans[i]]; //str[0]-'0'对应ASCLL值 49-48=1
        if (i != 0)
        {
            cout << " ";
        }
    }
    
    return 0;
}
