/*
   P1071 [NOIP2009 提高组] 潜伏者
 * @Autor: 乌搏猿
 * @Date: 2021-10-13 20:29:47
 * @LastEditTime: 2021-10-13 22:03:48
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1071.cpp
 */
#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

//a,b,c,d分别表示加密串、原串、密字串、待解码串
string a,b,d;
//a,b,c,d分别表示加密串、原串、密字串、待解码串
char c[30];
bool cf[30];
bool flag=false;

int main_1071(){
    cin>>a>>b>>d;
    for(int i=0;i<a.length();i++){
        if(!cf[a[i]-'A']){
            cf[a[i]-'A']=true;
            c[a[i]-'A']=b[i];
        }else if(c[a[i]-'A']!=b[i]){
            flag=true;
            break;
        }
    }
    int tmp=strlen(c);
    if(((strlen(c))-64)==26) flag=true;
    if(a==b) flag=true;
    for(int i=0;i<strlen(c);i++){
        for(int j=0;j<strlen(c);j++){
            if(i==j) continue;
            if(c[i]==c[j]){
                flag=true;
                break;
            }
        }
    }
    if(!flag) for(int i=0;i<d.length();i++) printf("%c",c[d[i]-'A']);
    else printf("Failed");
    printf("\n");
    system("pause");
    return 0;
}