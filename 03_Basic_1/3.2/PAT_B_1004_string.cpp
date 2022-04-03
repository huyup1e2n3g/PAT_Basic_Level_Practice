#include<iostream>
#include<string>
using namespace std;
struct Student
{
    string name;
    string id;
    int score;
}temp, ans_max, ans_min;

int main(){
    int n;
    ans_max.score = -1, ans_min.score = 101;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp.name >> temp.id >> temp.score;
        if (temp.score > ans_max.score) 
        {
            ans_max = temp;
        }
        if (temp.score < ans_min.score) 
        {
            ans_min = temp;
        }
    }
    cout << ans_max.name << " " << ans_max.id << endl;
    cout << ans_min.name << " " << ans_min.id << endl;
    return 0;
}