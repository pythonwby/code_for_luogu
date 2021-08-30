/*
   P2669 [NOIP2015 普及组] 金币
 * @Autor: 乌搏猿
 * @Date: 2021-08-27 17:14:12
 * @LastEditTime: 2021-08-27 18:29:43
 * @state: AC
 * @FilePath: \code_for_luogu\noip\P2669.cpp
 */
#include <cstdio>

//a:记录当天金币获得数量,b:获得指定数量金币的天数倒计时
int n,sum=0,a=1,b=1;

int main_2669(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sum+=a;
        b--;
        if(!b) b=++a;
    }
    printf("%d\n",sum);
    system("pause");
    return 0;
}