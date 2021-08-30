/*
   P3955 [NOIP2017 普及组] 图书管理员
 * @Autor: 乌搏猿
 * @Date: 2021-08-30 16:52:14
 * @LastEditTime: 2021-08-30 17:16:19
 * @state: AC
 * @FilePath: \code_for_luogu\noip\two\P3955.cpp
 */
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

//q:询问次数,ts:图书编号
int n,q,ts[1010];

int main_3955(){
    scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++) scanf("%d",&ts[i]);
    sort(ts,ts+n);
    for(int i=0;i<q;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        //flag:未找到则为true
        bool flag=true;
        int c;
        for(int j=0;j<n&&flag;j++){
            if(ts[j]%int(pow(10,a))==b) flag=false,c=j;
        }
        if(flag) printf("-1\n");
        else printf("%d\n",ts[c]);
    }
    system("pause");
    return 0;
}