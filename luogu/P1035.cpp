/*
   P1035 [NOIP2002 �ռ���] �������
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-25 14:23:43
 * @LastEditTime: 2021-09-25 14:45:25
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1035.cpp
 */
#include <cstdio>

//n,k����Ŀ�е���˼��ͬ
int n=1,k;

int main_1035(){
    scanf("%d",&k);
    for(double sn=0;sn<=k;n++) sn+=1.0/n;
    printf("%d\n",n-1);
    system("pause");
    return 0;
}