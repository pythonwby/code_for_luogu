/*
   �������� | P1116
 * @Author: �ڲ�Գ
 * @Date: 2023-02-02 16:36:38
 * @LastEditTime: 2023-02-02 16:40:44
 * @State: AC
 * @FilePath: \code_for_luogu\luogu\P1116.cpp
 * @��ʾ: Crtl + Win + I ����ļ�ͷ
 */
#include <cstdio>

int n, a[10005], c;

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j])
            {
                c++;
            }
        }
    }
    printf("%d\n", c);
    system("pause");
    return 0;
}