/*
   1064�����˽��Ƽ���
 * @Autor: �ڲ�Գ
 * @Date: 2021-11-15 21:37:19
 * @LastEditTime: 2021-11-15 21:40:01
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1064.cpp
 */
#include <cstdio>

int n,j,y,t;

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        j+=a;
        y+=b;
        t+=c;
    }
    printf("%d %d %d %d\n",j,y,t,j+y+t);
    system("pause");
    return 0;
}