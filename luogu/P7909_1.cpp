/*
   [CSP-J 2021] 分糖果 | P7909
 * @Author: 乌搏猿
 * @Date: 2022-10-16 18:50:32
 * @LastEditTime: 2022-10-16 18:53:34
 * @State: AC
 * @FilePath: \code_for_luogu\luogu\P7909_1.cpp
 * @提示: Crtl + Win + I 添加文件头
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