/*
   P1160 ���а���
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-18 16:23:26
 * @LastEditTime: 2021-08-20 14:21:28
 * @state: Other
 * @FilePath: \code_for_luogu\datd_structrue1-1\P1160.cpp
 */
//��δ��ɣ�����
#include <cstdio>
#include <cstring>

//a:���ÿ���˵�����
int n,m,a[100010][3],idx=1,head;

//������������˵ĺ���
void add(int k,int lr){
    a[idx][0]=1;
    k--;
    //true������ߣ�false�����ұ�
    if(lr){
        if(head==k) head=idx;
        a[idx][1]=a[k][1];
        a[a[k][1]][2]=idx;
        a[k][1]=idx;
        a[idx][2]=idx-1;
    }else{
        a[idx][2]=a[k][2];
        a[a[k][2]][1]=idx;
        a[k][2]=idx;
        a[idx][1]=idx-1;
    }
    idx++;
}
void del(int k){
    k--;
    a[k][0]=0;
    a[a[k][1]][2]=a[k][2];
    a[a[k][2]][1]=a[k][1];
    a[k][1]=-1;
    a[k][2]=-1;
    idx--;
}
int main(){
    a[0][0]=1;
    memset(a,-1,sizeof(a));
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int k,lr;
        scanf("%d%d",&k,&lr);
        add(k,lr);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int k;
        scanf("%d",&k);
        del(k);
    }
    for(int i=head;a[i][2]!=-1;i=a[i][2]) printf("%d ",i);
    system("pause");
    return 0;
}