/*
   P1177 ��ģ�塿��������
 * @Autor: �ڲ�Գ
 * @Date: 2021-10-17 14:06:02
 * @LastEditTime: 2021-10-17 14:08:56
 * @state: Other
 * @FilePath: \code_for_luogu\luogu\P1177.cpp
 */
#include <cstdio>
#include <algorithm>
using namespace std;

//����������Ŀ��ͬ
int n,a[100010];

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    system("pause");
    return 0;
}