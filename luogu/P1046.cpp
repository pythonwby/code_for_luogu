/*
   P1046 [NOIP2005 �ռ���] ����ժƻ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-26 20:46:03
 * @LastEditTime: 2021-09-26 20:51:41
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1046.cpp
 */
#include <cstdio>

//n:�����ֵ����߶�,pg:��¼ÿ��ƻ���ĸ߶�,ans:��
int n,ans=0,pg[15];

int main_1046(){
    for(int i=0;i<10;i++) scanf("%d",&pg[i]);
    scanf("%d",&n);
    for(int i=0;i<10;i++) if(pg[i]<=n+30) ans++;
    printf("%d\n",ans);
    system("pause");
    return 0;
}