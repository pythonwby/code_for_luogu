/*
   P1478 ����ժƻ���������棩
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-06 15:20:24
 * @LastEditTime: 2021-10-06 16:03:56
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1478.cpp
 */
#include <cstdio>

//����������Ŀ��ͬ
int n,a,s,b,ans=0,x[5010],y[5010];
//v:��¼ͬ�±�����û�б�ժ
bool v[5010];

int main_1478(){
    scanf("%d%d%d%d",&n,&s,&a,&b);
    for(int i=0;i<n;i++) scanf("%d%d",&x[i],&y[i]);
    for(int i=0;i<n;i++){
        int min_=1e9;
        int p;
        for(int j=0;j<n;j++){
            if(x[j]<=a+b&&(!v[j])&&y[j]<=min_){
                min_=y[j];
                p=j;
            }
        }
        if(s-min_>=0){
            s-=min_;
            ans++;
            v[p]=true;
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}