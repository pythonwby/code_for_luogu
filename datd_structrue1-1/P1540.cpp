/*
   P1540 [NOIP2010 �����] ��������
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-18 15:20:03
 * @LastEditTime: 2021-08-18 16:24:02
 * @state: AC
 * @FilePath: \code_for_luogu\datd_structrue1-1\P1540.cpp
 */
#include <cstdio>
#include <cstring>

//a:��������,b:�ڴ�����,c:��ǵ�ǰӦ�ð��µ��ִ����ڴ��λ��,d:��¼��ʵ����
int n,m,a[10010],b[10010],c,d;

//���������Ƿ����ڴ��еĺ���
bool e(int x){
    for(int i=0;i<m;i++)
        if(b[i]==x) return true;
    return false;
}
//���ڴ��д������ֵĺ���
void f(int x){
    if(c+1>=m) c-=m;
    b[++c]=x;
    d++;
}
int main_1540(){
    memset(a,-1,sizeof(a));
    memset(b,-1,sizeof(b));
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) if(!e(a[i])) f(a[i]);
    printf("%d\n",d);
    system("pause");
    return 0;
}