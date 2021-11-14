/*
   1053：最大数输出
 * @Autor: 乌搏猿
 * @Date: 2021-11-14 14:55:11
 * @LastEditTime: 2021-11-14 14:56:41
 * @state: Other
 * @FilePath: \code_for_luogu\ybt\1053.cpp
 */
#include <cstdio>

int a,b,c;

int max(int x,int y){return x>y?x:y;}
int main(){
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",max(a,max(b,c)));
    system("pause");
    return 0;
}