/*
   P1093 [NOIP2007 普及组] 奖学金
 * @Author: 乌搏猿
 * @Date: 2023-02-02 15:08:59
 * @LastEditTime: 2023-02-02 17:54:26
 * @State: AC
 * @FilePath: \code_for_luogu\luogu\P1093.cpp
 * @提示: Crtl + Win + I 添加文件头
 */
#include <cstdio>
#include <algorithm>
using namespace std;

struct student
{
    int a, b, c, num, zf;
};

int n;
student a[305];

bool cmp(student x, student y)
{
    if (x.zf < y.zf)
        return false;
    if (x.zf == y.zf && x.a < y.a)
        return false;
    if (x.zf == y.zf && x.a == y.a && x.num > y.num)
        return false;
    return true;
}
// bool cmp(student x, student y)
// {
//     if (x.zf <= y.zf && x.a <= y.a && x.b <= y.b && x.c <= y.c && x.num > y.num)
//         return false;
//     return true;
// }
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].c);
        a[i].num = i + 1;
        a[i].zf = a[i].a + a[i].b + a[i].c;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < 5; i++)
    {
        printf("%d %d\n", a[i].num, a[i].zf);
    }
    system("pause");
    return 0;
}