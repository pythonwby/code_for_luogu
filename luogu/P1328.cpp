/*
   P1328 [NOIP2014 �����] �����ը��ʯͷ������
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-10 15:14:50
 * @LastEditTime: 2021-10-10 15:51:21
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1328.cpp
 */
#include <cstdio>

//sy:�����Ӯ0:��1:ƽ2:Ӯ
int sy[10][10]={
                {1,0,2,2,0},
                {2,1,0,2,0},
                {0,2,1,0,2},
                {0,0,2,1,2},
                {2,2,0,0,1},
                };
//����������Ŀ��ͬ
int a[210],b[210],n,na,nb,ca=0,cb=0;
int main_1328(){
    scanf("%d%d%d",&n,&na,&nb);
    for(int i=0;i<na;i++) scanf("%d",&a[i]);
    for(int i=0;i<nb;i++) scanf("%d",&b[i]);
    for(int i=0,j=0,k=0;i<n;i++,j++,k++){
        if(j>=na) j=0;
        if(k>=nb) k=0;
        if(sy[a[j]][b[k]]==0) cb++;
        if(sy[a[j]][b[k]]==1) continue;
        if(sy[a[j]][b[k]]==2) ca++;
    }
    printf("%d %d\n",ca,cb);
    system("pause");
    return 0;
}