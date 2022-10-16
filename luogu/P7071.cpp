/*
   P7071 [CSP-J2020] 优秀的拆分
 * @Author: 乌搏猿
 * @Date: 2022-10-16 14:19:40
 * @LastEditTime: 2022-10-16 14:30:45
 * @State: AC
 * @FilePath: \code_for_luogu\luogu\P7071.cpp
 * @提示: Crtl + Win + I 添加文件头
 */
#include <cstdio>

long long a[] = {
    0,
    2,
    4,
    8,
    16,
    32,
    64,
    128,
    256,
    512,
    1024,
    2048,
    4096,
    8192,
    16384,
    32768,
    65536,
    131072,
    262144,
    524288,
    1048576,
    2097152,
    4194304,
    8388608,
    16777216,
    33554432,
    67108864,
    134217728};
long long n;
bool f = false;

int main()
{
    scanf("%lld", &n);
    if (n % 2 == 1)
    {
        printf("-1\n");
        f = true;
    }
    for (int i = 27; i > 0 && !f; i--)
    {
        if (a[i] <= n)
        {
            n -= a[i];
            printf("%lld ", a[i]);
        }
        if (n == 0)
            break;
    }
    if (!f)
        printf("\n");
    system("pause");
    return 0;
}