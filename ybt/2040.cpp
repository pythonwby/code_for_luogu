/*
   2040������5.7��ɸѡ��������
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-25 20:58:04
 * @LastEditTime: 2021-11-25 20:59:19
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2040.cpp
 */
#include <cstdio>

int n;

bool zs(int x){
    if(x<=1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(zs(i)) printf("%d\n",i);
    }
    system("pause");
    return 0;
}