////
//// Created by admin1 on 2018/1/19.
////埃氏筛法
////使用一个bool型数组p标记，如果a被筛掉，则p[a] =true,否则为p[a]=false,初始化可p时都为false
////bool p[maxn]= {0}; //如果i为素数，p[i]为false,否则p[i]为true 初始化都为false
////
//
//
//#include <string>
//#include<iostream>
//#include <cstdio>
//#include<cmath>
//#include <vector>
//#include <stdlib.h>
//#include <map>
//#include <algorithm>
//using namespace std;
//const int maxn = 1000001; //表长
//int prime[maxn], pNum =0; // prime数组存放所有素数，pNum为素数个数
//bool p[maxn]= {0}; //如果i为素数，p[i]为false,否则p[i]为true 初始化都为false
//void Find_Prime(int n)
//{
//    for(int i=2;i < maxn; i++)  // 不要写成i<= maxn
//    {
//        if(p[i] == false)
//        {
//            prime[pNum++] = i; //把素数i放到prime数组中
//            if(pNum >= n)  // 素数的个数超过n 退出
//                break;
//            for(int j =i*2;j<maxn;j+=i) // 不要写成j<= maxn
//            {
//                p[j] = true;
//            }
//        }
//    }
//}
//int main()
//{
//    int m,n,count =0;
//    cin>>m>>n;
//    Find_Prime(n);
////    for(int i=0;i<pNum;i++)
////    {
////        cout<<prime[i]<<"#"; // 这里主要用来测试空格的格式的 用#来代替更加明显
////    }
//    for(int i = m;i<=n;i++) {
//        cout << prime[i - 1];
//        count++;
//        if (count % 10 != 0 && i < n) {
//            cout<<" ";
//        }
//        else if(count%10 == 0){
//            cout<<endl;
//        }
//    }
//    return 0;
//}
//
