/*
   P1149 [NOIP2008 �����] ������ʽ
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-15 16:57:22
 * @LastEditTime: 2021-08-15 17:47:19
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-3\P1149.cpp
 */
#include <cstdio>

//sum:��ʽ��,gs:��Ȼ����Ӧ�Ļ�����,n:�ܻ�����
int sum,gs[10000]={6,2,5,5,4,5,6,3,7,6},n;

int fgs(int x){
    if(x<=9) return gs[x];
    int tmp=0;
    do{
        tmp+=gs[x%10];
        x/=10;
    }while(x);
    return tmp;
}
int main_1149(){
    scanf("%d",&n);
    for(int a=0;a<=2000;a++){
        for(int b=0;b<=2000;b++){
            int c=a+b;
            if(fgs(a)+fgs(b)+fgs(c)==n-4)sum++;
        }
    }
    printf("%d\n",sum);
    system("pause");
    return 0;
}