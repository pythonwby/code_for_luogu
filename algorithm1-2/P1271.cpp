/* 
   P1271 [���9.��] ѡ��ѧ����
 * @Author: �ڲ�Գ
 * @Date: 2021-08-15 11:03:47
 * @LastEditTime: 2021-08-15 11:21:47
 * @state: Other
 * @FilePath: \code_for_luogu\algorithm1-2\P1271.cpp
 */
//��δ��ɣ�����
#include <cstdio>

//n:�������ֵ,m:������,a:��������
int n,m,a[2000010];

//�ϲ�����
void hb(int *l,int llen,int *r,int rlen){
    int temp[2000010],i,j,k;
    while(i<llen&&j<rlen){
        if(l[i]<r[j]) temp[k++]=l[i++];
        else if(r[j]<l[i]) temp[k++]=r[j++];
    }
    while(i<llen) temp[k++]=l[i++];
    while(j<rlen) temp[k++]=r[j++];
    for(i=0;i<k;i++) l[i]=temp[i];
}
//�鲢����
void gp(int *a,int len){
    if(len<2) return;
    int mid=len/2;
    gp(a,mid);
    gp(a+mid,len-mid);
    hb(a,mid,a+mid,len-mid);
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    gp(a,m);
    for(int i=0;i<m;i++) printf("%d ",a[i]);
    system("pause");
    return 0;
}