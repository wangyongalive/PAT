////
//// Created by admin1 on 2018/1/
////路径当中不可以用中文
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
//bool com(int a, int b)
//{
//    return  a > b ;  // 降序
//}
//void to_array(int n, int num[]) // 将num每一位保存到数组中
//{
//    for(int i=0;i<4;i++)
//    {
//        num[i] = n % 10;  //从低位开始
//        n = n/10;
//    }
//}
//
//int to_num(int num[])  // 将num数组变为数
//{
//    int sum =0;
//    for(int i =0;i<4;i++)
//    {
//        sum= sum*10 + num[i];
//    }
//}
//
//int main()
//{
//    int n,num[5];
//    int max =-1,min = 10000;
//    cin>>n;
//     while(1)
//     {
//         to_array(n,num);
//         sort(num, num+4); //升
//         min = to_num(num);
//         sort(num, num+4, com); //降
//         max = to_num(num);
//         n = max - min;
//         cout<<n<<endl;
//         if(n==0 || n==6174)  //下一个数如果是0或者6174就退出
//             break;
//     }
//
//    return 0;
//}