/* 
   P1177 [ģ��] ��������
 * @Author: �ڲ�Գ
 * @Date: 2021-08-14 16:47:41
 * @LastEditTime: 2021-08-14 18:14:58
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-2\P1177.cpp
 */
#include <cstdio>

//a:����������,n:����������
int a[100010],n,b,i,j;

//���ź��ĺ���
void sort(int l,int r){
    b=a[(l+r)/2],i=l,j=r;
    do{
        while(a[i]<b) i++;
        while(a[j]>b) j--;
        if(i<=j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) sort(l,j);
    if(i<r) sort(i,r);
}
int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(0,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    system("pause");
    return 0;
}