/*
   2024������4.10��ĩ��λ��
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-22 20:39:27
 * @LastEditTime: 2021-11-22 20:55:02
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2024.cpp
 */
#include <cstdio>

int n,ans=1;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ans*=1992;
        ans%=100;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}