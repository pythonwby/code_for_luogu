/*
   P2241 统计方形（数据加强版）
 * @Autor: 乌搏猿
 * @Date: 2021-08-15 15:29:58
 * @LastEditTime: 2021-08-15 16:32:56
 * @state: Other
 * @FilePath: \code_for_luogu\algorithm1-3\P2241.cpp
 */
//数据较大，采用 long long int 类型防止溢出！！！
#include <cstdio>

//a:正方形个数,b:长方形个数,n:棋盘长度,m:棋盘宽度
long long int a,b,n,m;

int main_2241(){
    scanf("%d%d",&n,&m);
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<m;j++){
            if(i==j) a+=(n-i)*(m-j);
            else b+=(n-i)*(m-j);
         }
    }
    printf("%lld %lld\n",a,b);
    system("pause");
    return 0;
}