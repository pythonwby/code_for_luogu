/*
   2023：【例4.8】数据统计
 * @Autor: 乌搏猿
 * @Date: 2021-11-21 14:42:43
 * @LastEditTime: 2021-11-21 14:48:56
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2023.cpp
 */
#include <cstdio>

int a=-2100000000,b=2100000000,n=0,tmp;
double cnt=0;

int main(){
    while(scanf("%d",&tmp)==1){
        if(tmp>a) a=tmp;
        if(tmp<b) b=tmp;
        cnt+=tmp;
        n++;
    }
    cnt/=n;
    printf("%d %d %.3lf\n",b,a,cnt);
    system("pause");
    return 0;
}