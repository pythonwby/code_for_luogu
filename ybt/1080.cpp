/*
   1080��������ͬ����
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-18 20:25:07
 * @LastEditTime: 2021-11-18 20:26:51
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1080.cpp
 */
#include <cstdio>

int a,b,c,x;

int main(){
    scanf("%d%d%d",&a,&b,&c);
    for(x=2;;x++){
        if(a%x==b%x&&a%x==c%x) break;
    }
    printf("%d\n",x);
    system("pause");
    return 0;
}