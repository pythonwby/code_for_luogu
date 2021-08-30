/*
   P2010 [NOIP2016 普及组] 回文日期
 * @Autor: 乌搏猿
 * @Date: 2021-08-30 17:33:31
 * @LastEditTime: 2021-08-30 18:32:31
 * @state: AC
 * @FilePath: \code_for_luogu\noip\two\P2010.cpp
 */
#include <cstdio>

//a:每个月的天数
int ans=0,sum,d1,d2,a[20]={-1,31,29,31,30,31,30,31,31,30,31,30,31};

int main_2010(){
    scanf("%d%d",&d1,&d2);
    for(int i=1;i<=12;i++){
        for(int j=1;j<=a[i];j++){
            sum=0;
            sum+=j+i*100;
            sum+=i/10*10000;
            sum+=i%10*100000;
            sum+=j/10*1000000;
            sum+=j%10*10000000;
            if(sum<=d2&&sum>=d1) ans++;
        }
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}