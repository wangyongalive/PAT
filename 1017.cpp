//本题要求计算A/B，其中A是不超过1000位的正整数，B是1位正整数。
// 你需要输出商数Q和余数R，使得A = B * Q + R成立。

// 大整数(高精度整数)的运算

#include <cstdio>
#include <cstring>

using namespace std;

// 定义结构体
struct bign {
    int d[1000];
    int len;

    bign() { //初始化
        memset(d, 0, sizeof(d));
        len = 0;
    }
};

// 反转
// 参数 待转变的字符串
// 输出 反转后的结果
bign change(char str[]) {
    bign a;
    a.len = strlen(str);
    for (int i = 0; i < a.len; i++) {
        a.d[i] = str[a.len - i - 1] - '0'; // reverse
    }
    return a;
}

// 比较大小
// 参数 两个大整数
// 输出 a 大 相等 小分别返回 1 0 -1
int compare(bign a, bign b) {
    if (a.len > b.len) {
        return 1; // a大
    } else if (a.len < b.len) return -1; // a 小
    else { // 位数一样
        for (int i = a.len - 1; i >= 0; i--) { // 从高位到低位比较
            if (a.d[i] > b.d[i]) return 1;
            else if (a.d[i] < b.d[i]) return -1;
        }
        return 0; // 相等
    }
}

// 大整数的加法
bign add(bign a, bign b) {
    bign c;
    int carry = 0;//carry是进位
    for (int i = 0; i < a.len || i < b.len; ++i) { // 以较长的为界限
        int temp = a.d[i] + b.d[i] + carry; // 两个对应位与进位相加
        c.d[c.len++] = temp % 10; // 个位为该位的结果
        carry = temp / 10;
    }
    if (carry != 0) { // 如果最后进位不为0 直接赋给最高位
        c.d[c.len++] = carry;
    }
    return c;
}

void print(bign a) {
    for (int i = a.len - 1; i >= 0; i--) {
        printf("%d", a.d[i]);
    }
}

int main() {
    char str1[1000], str2[1000];
    scanf("%s%s", str1, str2);
    bign a = change(str1);
    bign b = change(str2);
    print(add(a, b));
    return 0;
}