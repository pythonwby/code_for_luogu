/*
   P2141 [NOIP2014 �ռ���] ���������
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-27 17:11:55
 * @LastEditTime: 2021-08-27 17:24:07
 * @state: AC
 * @FilePath: \code_for_luogu\noip\P2141.cpp
 */
#include <cstdio>

//a:��������,b:����ͳ�ƴ�������Ͱ
int n,a[110],b[20010],ans=0;

int main_2141(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            b[a[i]+a[j]]++;
        }
    }
    for(int i=1;i<20003;i++){
        if(b[i]){
            for(int j=1;j<=n;j++){
                if(a[j]==i)ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}