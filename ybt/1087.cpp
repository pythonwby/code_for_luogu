/*
   1087：级数求和
 * @Autor: 乌搏猿
 * @Date: 2021-11-21 14:59:21
 * @LastEditTime: 2021-11-21 15:00:27
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1087.cpp
 */
#include <cstdio>

int m;
double n=1,a;

int main(){
    scanf("%d",&m);
    while(a<=m){
        a+=1/n;
        n++;
    }
    printf("%.0lf\n",--n);
    system("pause");
    return 0;
}