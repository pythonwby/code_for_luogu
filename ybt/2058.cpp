/*
   2058£º¡¾Àý3.10¡¿¼òµ¥¼ÆËãÆ÷
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-14 13:43:49
 * @LastEditTime: 2021-11-14 13:50:38
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2058.cpp
 */
#include <cstdio>
#include <iostream>
using namespace std;

double a,b;
char c;

int main(){
    scanf("%lf %lf %c",&a,&b,&c);
    switch(c){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            if(b==0){
                printf("Divided by zero!\n");
                break;
            }
            cout<<a/b<<endl;
            break;
        default :
            printf("Invalid operator!\n");
            break;
    }
    system("pause");
    return 0;
}