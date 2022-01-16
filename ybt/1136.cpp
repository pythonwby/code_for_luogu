/*
   1136£ºÃÜÂë·­Òë
 * @Autor: ÎÚ²«Ô³
 * @Date: 2021-12-14 21:08:27
 * @LastEditTime: 2021-12-14 21:19:41
 * @state: Other
 * @FilePath: \code_for_luogu\ybt\1136.cpp
 */
#include <cstdio>
#include <iostream>
using namespace std;

string a;

int main(){
    getline(cin,a);
    for(char i:a){
        if(i=='z') printf("a");
        else if(i=='Z') printf("A");
        else if((i>='a'&&i<='z')||(i>='A'&&i<='Z')) printf("%c",(char)i+1);
        else printf("%c",i);
    }
    printf("\n");
    system("pause");
    return 0;
}