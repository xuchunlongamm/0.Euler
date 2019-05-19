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
/*************************************************************************
	> File Name: 偶斐波那契数g.c
	> Author:爱瑞的LS 
	> Mail:2939720340@qq.com 
	> Created Time: 2019年05月19日 星期日 18时14分33秒
 ************************************************************************/

#include <stdio.h>
#define max_n 44
#define max_m 4000000
int fib[max_n + 5];
int main() {
    long long sum = 0;
    int a = 0, b = 1;
    while (a + b < max_m) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;
    }
    printf("%lld\n", sum);
    return 0;
}
//    int n = 2;
//    fib[1] = 1;
//    fib[2] = 2;
//    while (fib[n] = 2; fib[fib[0]] <= max_m; fib[0]++) {
//        fib[fib[0] + 1] = fib[fib[0] + fib[fib[0] - 1];
//    }
//    int sum = 0;
//    for (int i = 1; i <= fib[0]; i++) {
//        if (fib[i] % 2)continue
//        sum += fib[i];
//    }                          
//    printf("%lld\n", sum);
//    return 0;
//}
