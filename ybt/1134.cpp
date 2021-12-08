/*
   1134：合法C标识符查
 * @Autor: 乌搏猿
 * @Date: 2021-12-08 20:09:41
 * @LastEditTime: 2021-12-08 20:25:31
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1134.cpp
 */
#include <cstdio>
#include <iostream>
using namespace std;

bool flag=true;
string a;

int main(){
    cin>>a;
    if(a[0]>='0'&&a[0]<='9') flag=false;
    for(auto i:a){
        if(i!='_'&&i!='a'&&i!='b'&&i!='c'&&i!='d'&&i!='e'&&i!='f'&&i!='g'&&
           i!='h'&&i!='i'&&i!='j'&&i!='k'&&i!='l'&&i!='m'&&i!='n'&&i!='o'&&
           i!='p'&&i!='q'&&i!='r'&&i!='s'&&i!='t'&&i!='u'&&i!='v'&&i!='w'&&
           i!='x'&&i!='y'&&i!='z'&&i!='A'&&i!='B'&&i!='C'&&i!='D'&&i!='E'&&
           i!='F'&&i!='G'&&i!='H'&&i!='I'&&i!='J'&&i!='K'&&i!='L'&&i!='M'&&
           i!='N'&&i!='O'&&i!='P'&&i!='Q'&&i!='R'&&i!='S'&&i!='T'&&i!='U'&&
           i!='V'&&i!='W'&&i!='X'&&i!='Y'&&i!='Z'&&i!='1'&&i!='2'&&i!='3'&&
           i!='4'&&i!='5'&&i!='6'&&i!='7'&&i!='8'&&i!='9'&&i!='0') flag=false;
    }
    if(flag) printf("yes\n");
    else printf("no\n");
    system("pause");
    return 0;
}