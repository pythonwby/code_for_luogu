/*
   P1909 [NOIP2016 �ռ���] ��Ǧ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-27 17:16:10
 * @LastEditTime: 2021-08-31 17:42:46
 * @state: AC
 * @FilePath: \code_for_luogu\noip\one\P1909.cpp
 */
#include <cstdio>
#include <cmath>

//a��b��c�ֱ��������Ǧ�ʰ�װ��1��Ǧ������2�ǰ�װ�۸�
int ans,a1,b1,c1,a2,b2,c2,n;

int min(int a,int b){return a<b?a:b;}
int main_1909(){
    scanf("%d%d%d%d%d%d%d",&n,&a1,&a2,&b1,&b2,&c1,&c2);
    ans=a2*ceil(1.0*n/a1);
    ans=min(ans,b2*int(ceil(1.0*n/b1)));
    ans=min(ans,c2*int(ceil(1.0*n/c1)));
    printf("%d\n",ans);
    system("pause");
    return 0;
}