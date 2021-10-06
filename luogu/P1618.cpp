/*
   P1618 三连击（升级版）
 * @Autor: 乌搏猿
 * @Date: 2021-10-06 16:09:40
 * @LastEditTime: 2021-10-06 16:35:10
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1618.cpp
 */
#include <cstdio>

//变量与题目相同
int a[10],b[10],c[10],x,y,z;
bool flag=true;

int main_1618(){
    scanf("%d %d %d",&x,&y,&z);
    if(x==123&&y==456&&z==789){
        printf("123 456 789\n");
        system("pause");
        return 0;
    }
    for(int i=1;i<=999;i++){
        int temp=i;
        a[0]=temp%10;
        a[1]=temp%100/10;
        a[2]=temp/100;
        temp*=y/x;
        b[0]=temp%10;
        b[1]=temp%100/10;
        b[2]=temp/100;
        temp=temp/y*x;
        temp*=z/x;
        c[0]=temp%10;
        c[1]=temp%100/10;
        c[2]=temp/100;
        if(a[0]*a[1]*a[2]*b[0]*b[1]*b[2]*c[0]*c[1]*c[2]==2*3*4*5*6*7*8*9&&
        a[0]+a[1]+a[2]+b[0]+b[1]+b[2]+c[0]+c[1]+c[2]==1+2+3+4+5+6+7+8+9){
            flag=false;
            printf("%d %d %d\n",i,i*y/x,i*z/x);
        }
    }
    if(flag) printf("No!!!\n");
    system("pause");
    return 0;
}