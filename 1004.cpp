/*
 * @Descripttion: 
 * @version: 1.0
 * @Author: YuPain
 * @Date: 2021-09-17
 */
#include<iostream>
#include<cstring>
using namespace std;

int main(){

    int n = 0; //读入n个学生
    cin >> n;
    string maxname, minname;
    string maxnumber, minnumber;
    int maxgrade, mingrade = 0;
    for (int i = 0; i < n; i++)
    {
        //数据初始化
        string name, number;
        int grade;
        cin >> name >> number >> grade;
        if(i == 0)
        {
            maxname = name;
            minname = name;
            maxgrade = grade;
            mingrade = grade;
            maxnumber = number;
            minnumber = number;
        }
        if (grade > maxgrade)
        {
            maxname = name;
            maxnumber = number;
            maxgrade = grade;
        }
        if (grade < mingrade)
        {
            minname = name;
            minnumber = number;
            mingrade = grade;
        }
        
    }
    
    cout << maxname << " " << maxnumber << endl;
    cout << minname << " " << minnumber << endl;

    return 0;
}
