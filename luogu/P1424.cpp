/*
   P1424 С��ĺ���(�Ľ���)
 * @Autor: �ڲ�Գ
 * @Date: 2021-09-25 15:03:44
 * @LastEditTime: 2021-09-25 15:20:40
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1424.cpp
 */
#include <cstdio>

//x,n����Ŀ��ͬ,ans:С���εľ���
int x,n,ans=0;

int main_1424(){
    scanf("%d%d",&x,&n);
    for(int i=x;i<=n+x-1;i++){
        if(i%7==0||i%7==6) continue;
        ans+=250;
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}