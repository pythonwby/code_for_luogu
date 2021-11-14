/*
   1057£º¼òµ¥¼ÆËãÆ÷
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-11-14 15:18:11
 * @LastEditTime: 2021-11-14 15:18:11
 * @state: Other
 * @FilePath: \code_for_luogu\1057.cpp
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