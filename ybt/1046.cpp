/*
   1046：判断一个数能否同时被3和5整除
 * @Autor: 乌搏猿
 * @Date: 2021-11-14 13:22:51
 * @LastEditTime: 2021-11-14 13:25:28
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1046.cpp
 */
#include <cstdio>

int a;

int main(){
    scanf("%d",&a);
    if(a%3==0&&a%5==0) printf("YES\n");
    else printf("NO\n");
    system("pause");
    return 0;
}