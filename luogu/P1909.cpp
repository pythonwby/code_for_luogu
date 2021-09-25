/*
   P1909 [NOIP2016 普及组] 买铅笔
 * @Autor: 乌搏猿
 * @Date: 2021-09-25 09:19:58
 * @LastEditTime: 2021-09-25 10:15:35
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1909.cpp
 */
#include <cstdio>
#include <cmath>

//n:表示需要的铅笔数量,a、b、c、表示每种包装，1表示铅笔数，2表示价格,3表示这种包装需要的价格
int n,a1,a2,a3,b1,b2,b3,c1,c2,c3;

int min(int x,int y){return x<y?x:y;}
int main_1909(){
    scanf("%d%d%d%d%d%d%d",&n,&a1,&a2,&b1,&b2,&c1,&c2);
    a3=ceil(1.0*n/a1)*a2;
    b3=ceil(1.0*n/b1)*b2;
    c3=ceil(1.0*n/c1)*c2;
    printf("%d\n",min(a3,min(b3,c3)));
    system("pause");
    return 0;
}