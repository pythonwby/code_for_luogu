/*
   P3955 [NOIP2017 �ռ���] ͼ�����Ա
 * @Autor: �ڲ�Գ
 * @Date: 2021-08-30 16:52:14
 * @LastEditTime: 2021-08-30 17:16:19
 * @state: AC
 * @FilePath: \code_for_luogu\noip\two\P3955.cpp
 */
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

//q:ѯ�ʴ���,ts:ͼ����
int n,q,ts[1010];

int main_3955(){
    scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++) scanf("%d",&ts[i]);
    sort(ts,ts+n);
    for(int i=0;i<q;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        //flag:δ�ҵ���Ϊtrue
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