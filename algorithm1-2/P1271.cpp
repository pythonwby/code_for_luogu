/* 
   P1271 [���9.��] ѡ��ѧ����
 * @Author: �ڲ�Գ
 * @Date: 2021-08-15 11:03:47
 * @LastEditTime: 2021-08-15 15:16:18
 * @state: AC
 * @FilePath: \code_for_luogu\algorithm1-2\P1271.cpp
 */
//��δ��ɣ�����
#include <cstdio>

//n:�������ֵ,m:������,a:��������
int n,m,a[2000010],tmp[2000010];

//�鲢����
void gp(int q[],int l,int r){
    if (l >= r) return;

    int mid = l + r >> 1;

    gp(q, l, mid), gp(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
        if (q[i] <= q[j]) tmp[k ++ ] = q[i ++ ];
        else tmp[k ++ ] = q[j ++ ];
    while (i <= mid) tmp[k ++ ] = q[i ++ ];
    while (j <= r) tmp[k ++ ] = q[j ++ ];

    for (i = l, j = 0; i <= r; i ++, j ++ ) q[i] = tmp[j];
}
int main_1271(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) scanf("%d",&a[i]);
    gp(a,0,m-1);
    for(int i=0;i<m;i++) printf("%d ",a[i]);
    system("pause");
    return 0;
}