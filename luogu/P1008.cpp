/*
   P1008 [NOIP1998 普及组] 三连击
 * @Autor: 乌搏猿
 * @Date: 2021-09-25 13:44:11
 * @LastEditTime: 2021-09-25 14:04:56
 * @state: Other
 * @FilePath: \code_for_luogu\luogu\P1008.cpp
 */
#include <cstdio>

//a,b,c分别代表三个数字，t是临时变量
int a[5],b[5],c[5],t;

int main_1008(){
    for(int i=123;i<=333;i++){
        t=i;
        a[1]=t%10;
        a[2]=t%100/10;
        a[3]=t/100;
        t=i*2;
        b[1]=t%10;
        b[2]=t%100/10;
        b[3]=t/100;
        t=i*3;
        c[1]=t%10;
        c[2]=t%100/10;
        c[3]=t/100;
        if(a[1]*a[2]*a[3]*b[1]*b[2]*b[3]*c[1]*c[2]*c[3]==1*2*3*4*5*6*7*8*9
         &&a[1]+a[2]+a[3]+b[1]+b[2]+b[3]+c[1]+c[2]+c[3]==1+2+3+4+5+6+7+8+9)
            printf("%d %d %d\n",i,i*2,i*3);
    }
    system("pause");
    return 0;
}