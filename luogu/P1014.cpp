/*
   P1014 [NOIP1999 �ռ���] Cantor ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-07 11:49:03
 * @LastEditTime: 2021-10-07 11:51:37
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1014.cpp
 */
#include <cstdio>

//����������Ŀ��ͬ
int n,a=1;

int main_1014(){
    scanf("%d",&n);
    while(n-a>0){
        n-=a;
        a++;
    }
    if(a%2==0) printf("%d/%d",n,a+1-n);
    else printf("%d/%d\n",a+1-n,n);
    system("pause");
    return 0;
}