/*
   P1909 [NOIP2016 �ռ���] ��Ǧ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-25 09:19:58
 * @LastEditTime: 2021-09-25 10:15:35
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1909.cpp
 */
#include <cstdio>
#include <cmath>

//n:��ʾ��Ҫ��Ǧ������,a��b��c����ʾÿ�ְ�װ��1��ʾǦ������2��ʾ�۸�,3��ʾ���ְ�װ��Ҫ�ļ۸�
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