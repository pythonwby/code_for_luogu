/*
   1057���򵥼�����
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-14 15:18:11
 * @LastEditTime: 2021-11-15 21:13:40
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1057.cpp
 */
#include <cstdio>
#include <iostream>
using namespace std;

int a,b;
char c;

int main(){
    scanf("%d %d %c",&a,&b,&c);
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