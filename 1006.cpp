////
//// Created by admin1 on 2018/1/11.
////思路
////合理运用循环条件，可以写出简洁的代码。
////题目限制整数的位数最多三位，那么可以提取三位上的数字就可以了。某一位为0，那么循环根本不会执行，因此也不需要写额外的判断语句。
////
//
//#include <string>
//#include<iostream>
//#include <cstdio>
//#include<iostream>
//using namespace std;
//int main()
//{
//     int n;
//     cin>>n;
//    for(int i =0; i<n/100;i++)
//    {
//        cout<<"B";
//    }
//    for(int i =0; i<n%100/10;i++)
//    {
//        cout<<"S";
//    }
//    for(int i =1; i<= n%10;i++)
//    {
//        if  (n%10 == 0 )
//            break;
//          cout<<i;
//    }
//
//}