/* 
   P1923 [深基9.例4] 求第 k 小的数
 * @Author: 乌搏猿
 * @Date: 2021-08-14 18:20:49
 * @LastEditTime: 2021-08-15 11:04:45
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-2\P1923.cpp
 */
#include <cstdio>

int n,m,a[5000010];

void kp(int l,int r){
    int mid=a[(l+r)/2],i=l,j=r;
    do{
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) kp(l,j);
    if(i<r) kp(i,r);
}
int main_1923(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    kp(0,n);
    printf("%d\n",a[m+1]);
    //for(int i=0;i<n;i++) printf("%d ",a[i]);
    system("pause");
    return 0;
}