////
//// Created by admin1 on 2018/1/19.
//// 最大公约数的递归方法
//// 最小公倍数 a/d*b  为了防止计算的时候溢出
////
//
//#include <cstdio>
//#include <iostream>
//using namespace std;
//// 最大公约数的辗转相除法递归写法
//int gcd(int a, int b)
//{
//    return !b ? a : gcd(b, a%b);
//}
//int main()
//{
//    int a,b;
//    cin>>a>>b;
//    int  result = gcd(a,b);
//    cout<<result<<endl;
//    cout<<a/result*b;
//}