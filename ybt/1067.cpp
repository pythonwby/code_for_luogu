/*
   1067：整数的个数
 * @Autor: 乌搏猿
 * @Date: 2021-11-17 20:18:58
 * @LastEditTime: 2021-11-17 20:21:23
 * @state: AC
 * @FilePath: \code_for_luogu\ybt\1067.cpp
 */
#include <cstdio>

int k,a,b,c;

int main(){
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp==1) a++;
        if(tmp==5) b++;
        if(tmp==10) c++;
    }
    printf("%d\n%d\n%d\n",a,b,c);
    system("pause");
    return 0;
}