/*
   P1067 [NOIP2009 �ռ���] ����ʽ���
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-10 14:39:06
 * @LastEditTime: 2021-10-10 14:50:50
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1067.cpp
 */
#include <cstdio>

//��������Ŀ��ͬ
int n,a;

int main_1067(){
    scanf("%d",&n);
    for(int i=n;i>-1;i--){
        scanf("%d",&a);
        if(a==0) continue;
        if(a>0&&i<n) printf("+");
        if((a!=-1&&a!=1)||i==0) printf("%d",a);
        if(a==-1&&i>0) printf("-");
        if(i>1) printf("x^%d",i);
        if(i==1) printf("x");
    }
    printf("\n");
    system("pause");
    return 0;
}