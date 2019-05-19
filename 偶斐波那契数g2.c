/*************************************************************************
    > File Name:方法: 滚动数组
	> Author:爱瑞的LS 
	> Mail:2939720340@qq.com 
	> Created Time: 2019年05月19日 星期日 18时42分43秒
 ************************************************************************/

#include <stdio.h>
#define max_m 4000000
int main() {
    long long sum = 0;
    int f[3] = {0, 1};
    int n= 1;
    while (f[n % 3] + f[(n - 1) % 3] < max_m) {
        n += 1;
        f[n % 3] = f[(n - 1) % 3] + f[(n - 2) % 3];
        if (!(f[n % 3] & 1)) sum += f[n % 3];
    }
    printf("%lld\n", sum);
    return 0;
}
