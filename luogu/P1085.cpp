/*
   P1085 [NOIP2004 �ռ���] �����˵Ľ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-23 21:02:21
 * @LastEditTime: 2021-09-24 21:59:42
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1085.cpp
 */
#include <cstdio>

//n:����˵���һ��,m:����˵���һ���ѧϰʱ��
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