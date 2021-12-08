/*
   1129：统计数字字符个数
 * @Autor: 乌搏猿
 * @Date: 2021-12-08 19:43:53
 * @LastEditTime: 2021-12-08 19:46:43
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1129.cpp
 */
#include <cstdio>
#include <iostream>
using namespace std;

string a;
int cnt;

int main(){
    getline(cin,a);
    for(char i:a){
        if(i>='0'&&i<='9') cnt++;
    }
    printf("%d\n",cnt);
    system("pause");
    return 0;
}