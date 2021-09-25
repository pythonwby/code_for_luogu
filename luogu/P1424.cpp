/*
   P1424 小鱼的航程(改进版)
 * @Autor: 乌搏猿
 * @Date: 2021-09-25 15:03:44
 * @LastEditTime: 2021-09-25 15:20:40
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1424.cpp
 */
#include <cstdio>

//x,n与题目相同,ans:小鱼游的距离
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