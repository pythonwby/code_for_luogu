/*
   1068����ָ��������ͬ�����ĸ���
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-17 20:21:58
 * @LastEditTime: 2021-11-17 20:23:39
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1068.cpp
 */
#include <cstdio>

int n,m,ans;

int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp==m) ans++;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}