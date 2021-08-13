/* 
   P1042 [NOIP2003 普及组] 乒乓球
 * @Author: 乌搏猿
 * @Date: 2021-08-12 15:46:44
 * @LastEditTime: 2021-08-13 17:28:40
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-1\P1042.cpp
 */
#include <cstdio>
#include <cmath>

char a[62500],t;
int n,w,l;

int main_1042(){
    while(scanf("%c",&t)&&t!='E') a[n++]=t;
    //11分制
    for(int i=0;i<n;i++){
        if(a[i]=='W') w++;
        else if(a[i]=='L') l++;
        if((w>=11||l>=11)&&abs(w-l)>=2){
            printf("%d:%d\n",w,l);
            w=0;
            l=0;
        }
    }
    printf("%d:%d\n\n",w,l);
    w=0;
    l=0;
    //21分制
    for(int i=0;i<n;i++){
        if(a[i]=='W') w++;
        else if(a[i]=='L') l++;
        if((w>=21||l>=21)&&abs(w-l)>=2){
            printf("%d:%d\n",w,l);
            w=0;
            l=0;
        }
    }
    printf("%d:%d\n",w,l);
    system("pause");
    return 0;
}