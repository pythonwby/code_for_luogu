/*
   P1068 [NOIP2009 普及组] 分数线划定
 * @Autor: 乌搏猿
 * @Date: 2021-10-17 16:44:29
 * @LastEditTime: 2021-10-17 17:10:08
 * @state: AC
 * @FilePath: \code_for_luogu\luogu\P1068.cpp
 */
#include <algorithm>
#include <cstdio>
using namespace std;

//fsx:分数线,cnt:实际录入人数
int n,m,fsx,cnt=0;

struct ren{
    //bh:选手编号,fs:选手分数
    int bh,fs;
};
ren a[5010];

bool cmp1(ren x,ren y){
        if(x.fs>y.fs) return true;
        else if(x.fs<y.fs) return false;
        else if(x.bh<y.bh) return true;
        else return false;

}
int main_1068(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d%d",&a[i].bh,&a[i].fs);
    sort(a,a+n,cmp1);
    fsx=a[m/2*3].fs;
    for(int i=0;i<n;i++){
        if(a[i].fs>=fsx) cnt++;
    }
    printf("%d %d\n",fsx,cnt);
    for(int i=0;i<cnt;i++) printf("%d %d\n",a[i].bh,a[i].fs);
    system("pause");
    return 0;
}