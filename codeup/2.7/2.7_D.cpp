#include<cstdio>
#include<cstring>
void swap(char **a, char **b) //传入地址的地址，即二级指针地址， **a为地址存放的数据
//若传递一级指针地址，即char *a，则对数组内部进行操作
{
    char* temp; //定义指针
    temp = *a;  //交换指针的地址，以下交换代码与一级指针的代码一致，利用代换的思想。
    *a = *b;
    *b = temp;
}

int main(){
    char a[20], b[20], c[20];
    scanf("%s %s %s", a, b, c);
    char *p1 = a, *p2 = b, *p3 = c;
    //字符组比较,字符数组本来就是第一个字符的地址，p1=a 
    if(strcmp(p1, p2) > 0) swap(&p1, &p2);   //对不同指针进行操作，交换指针p1和指针p2的地址
    if(strcmp(p1, p3) > 0) swap(&p1, &p3);
    if(strcmp(p2, p3) > 0) swap(&p2, &p3);
    printf("%s\n%s\n%s\n", p1, p2, p3);
    return 0;
}