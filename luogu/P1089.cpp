/*
   P1089 [NOIP2004 提高组] 津津的储蓄计划
 * @Autor: 乌搏猿
 * @Date: 2021-09-24 21:10:14
 * @LastEditTime: 2021-09-24 21:59:56
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1089.cpp
 */
#include <cstdio>

//n:记录当月收到的钱,a:记录津津妈妈存的钱,b:津津的零钱
int n,a=0,b=0,i=0;
bool flag=false;

int main_1089(){
    for(i=1;i<=12&&flag==false;i++){
        scanf("%d",&n);
        b+=300;
        if(b<n)i=-i,flag=true;
        else{
            a+=(b-n)/100*100;
            b=(b-n)%100;
        }
    }
    if(flag) printf("%d\n",i-1);
    else printf("%.0lf\n",a*1.2+b);
    system("pause");
    return 0;
}