/*
   P1567 ͳ������
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-27 20:51:59
 * @LastEditTime: 2021-09-27 21:06:44
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1567.cpp
 */
#include <cstdio>

//a:��¼ÿһ����������
int n,ans=0,a[1000005],tmp=0;

int main_1567(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1]) tmp++;
        else{
            if(tmp>ans) ans=tmp;
            tmp=1;
        }
    }
    if(tmp>ans) ans=tmp;
    printf("%d\n",ans);
    system("pause");
    return 0;
}