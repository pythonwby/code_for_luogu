/*
   [CSP-J 2021] ���ǹ� | P7909
 * @Author: �ڲ�Գ
 * @Date: 2022-10-16 18:50:32
 * @LastEditTime: 2022-10-16 18:53:34
 * @State: AC
 * @FilePath: \code_for_luogu\luogu\P7909_1.cpp
 * @��ʾ: Crtl + Win + I ����ļ�ͷ
 */
#include <cstdio>

int n, r, l;

int main()
{
    scanf("%d%d%d", &n, &l, &r);
    if (r / n == l / n)
        printf("%d\n", r % n);
    else
        printf("%d\n", n - 1);
    system("pause");
    return 0;
}