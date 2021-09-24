/*
   P1085 [NOIP2004 普及组] 不高兴的津津
 * @Autor: 乌搏猿
 * @Date: 2021-09-23 21:02:21
 * @LastEditTime: 2021-09-24 21:59:42
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1085.cpp
 */
#include <cstdio>

//n:最不高兴的那一天,m:最不高兴的那一天的学习时间
int n=0,m=0;

int main_1085(){
    for(int i=0;i<7;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a+b>8&&a+b>m){
            n=i+1;
            m=a+b;
        }
    }
    printf("%d\n",n);
    system("pause");
    return 0;
}