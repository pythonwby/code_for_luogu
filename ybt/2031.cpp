/*
   2031：【例4.17】四位完全平方数
 * @Autor: 乌搏猿
 * @Date: 2021-11-24 20:52:40
 * @LastEditTime: 2021-11-24 21:00:12
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\2031.cpp
 */
#include <cstdio>

int main(){
    for(int i=10;i<=99;i++){
        int tmp=i*i;
        if(tmp/1000==tmp%1000/100&&tmp%100/10==tmp%10&&tmp/1000!=tmp%10) printf("%d\n",tmp);
    }
    system("pause");
    return 0;
}