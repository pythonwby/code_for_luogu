/*
   2046£º¡¾Àý5.15¡¿Ìæ»»×ÖÄ¸
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-07 21:04:44
 * @LastEditTime: 2021-12-07 21:12:15
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2046.cpp
 */
#include <iostream>
using namespace std;

char b,c;
string a;

int main(){
    getline(cin,a);
    scanf("%c %c",&b,&c);
    for(int i=0;i<a.length();i++){
        if(a[i]==b) a[i]=c;
    }
    cout<<a<<endl;
    system("pause");
    return 0;
}