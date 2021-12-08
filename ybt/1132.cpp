/*
   1132：石头剪子布
 * @Autor: 乌搏猿
 * @Date: 2021-12-08 19:55:44
 * @LastEditTime: 2021-12-08 20:07:48
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1132.cpp
 */
#include <cstdio>
#include <iostream>
using namespace std;

int n;
string s1,s2;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        if(s1==s2) printf("Tie\n");
        if(s1=="Rock"&&s2=="Scissors") printf("Player1\n");
        if(s1=="Rock"&&s2=="Paper") printf("Player2\n");
        if(s1=="Scissors"&&s2=="Rock") printf("Player2\n");
        if(s1=="Scissors"&&s2=="Paper") printf("Player1\n");
        if(s1=="Paper"&&s2=="Scissors") printf("Player2\n");
        if(s1=="Paper"&&s2=="Rock") printf("Player1\n");
    }
    system("pause");
    return 0;
}