/*
   P1047 [NOIP2005 �ռ���] У�������
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-26 20:59:54
 * @LastEditTime: 2021-09-26 21:09:49
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1047.cpp
 */
#include <cstdio>

//���б���������Ŀͬ��,ans:��
int l,m,u,v,ans;
bool ml[10005];

int main_1047(){
    scanf("%d%d",&l,&m);
    for(int i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        for(int i=u;i<=v;i++) ml[i]=true;
    }
    for(int i=0;i<=l;i++) if(!ml[i]) ans++;
    printf("%d\n",ans);
    system("pause");
    return 0;
}