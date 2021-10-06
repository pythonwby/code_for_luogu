/*
   P1579 哥德巴赫猜想（升级版）
 * @Autor: 乌搏猿
 * @Date: 2021-10-06 16:39:15
 * @LastEditTime: 2021-10-06 16:58:08
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1579.cpp
 */
#include <cstdio>

//变量名与题目相同
int n;

bool zs(int x){
    if(x<=1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int main_1579(){
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(!zs(i)) continue;
        for(int j=2;j<n;j++){
            if(!zs(j)) continue;
            int temp=n-i-j;
            if(zs(temp)){
                printf("%d %d %d\n",i,j,temp);
                system("pause");
                return 0;
            }
        }
    }
    printf("-1 -1 -1\n");
    system("pause");
    return 0;
}