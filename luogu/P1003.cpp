/*
   P1003 [NOIP2011 �����] �̵�̺
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-08 21:39:59
 * @LastEditTime: 2021-10-08 21:49:18
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1003.cpp
 */
#include <cstdio>

//���б�������Ŀ��ͬ
int n,x,y,a[10010],b[10010],g[10010],k[10010];
//flag:���ѯ���Ƿ��н�
bool flag=false;

int main_1003(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
    scanf("%d%d",&x,&y);
    for(int i=n-1;i>-1;i--){
        if(x>=a[i]&&y>=b[i]&&a[i]+g[i]>=x&&b[i]+k[i]>y){
            printf("%d\n",i+1);
            flag=true;
            break;
        }
    }
    if(!flag) printf("-1\n");
    system("pause");
    return 0;
}