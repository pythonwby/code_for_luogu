/*
   P2669 [NOIP2015 �ռ���] ���
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-27 17:14:12
 * @LastEditTime: 2021-08-27 18:29:43
 * @state: AC
 * @FilePath: \code_for_luogu\noip\P2669.cpp
 */
#include <cstdio>

//a:��¼�����һ������,b:���ָ��������ҵ���������ʱ
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