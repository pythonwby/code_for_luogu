/*
  P1149 [NOIP2008 �����] ������ʽ
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-06 11:43:54
 * @LastEditTime: 2021-10-06 11:52:35
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1149.cpp
 */
#include <cstdio>

//hc:ÿ����ͬ����Ҫ�Ļ�����
int hc[10]={6,2,5,5,4,5,6,3,7,6},a,b,c,ans=0,n;

//gs:��ѯ������
int gs(int x){
    if(x<=9) return hc[x];
    int sum=0;
    do{
        sum+=hc[x%10];
        x/=10;
    }while(x);
    return sum;
}
int main_1149(){
    scanf("%d",&n);
    for(a=0;a<2000;a++){
        for(b=0;b<2000;b++){
            c=a+b;
            if(gs(a)+gs(b)+gs(c)+4==n) ans++;
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}