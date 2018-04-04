////
//// Created by admin1 on 2018/1/11.
////
//#include <string>
//#include<iostream>
//#include <cstdio>
//#include<iostream>
//#include<cmath>
//#include <vector>
//using namespace std;
//bool isPrime( int num )
//{
//    //两个较小数另外处理
//    if(num ==2|| num==3 )
//        return 1 ;
//    //不在6的倍数两侧的一定不是质数
//    if(num %6!= 1&&num %6!= 5)
//        return 0 ;
//    int tmp =sqrt( num);
//    //在6的倍数两侧的也可能不是质数
//    for(int i= 5;i <=tmp; i+=6 )
//        if(num %i== 0||num %(i+ 2)==0 )
//            return 0 ;
//    //排除所有，剩余的是质数
//    return 1 ;
//}
//int main()
//{
//    int n,count = 0;
//    cin>>n;
//    vector<int> vt;
//    for(int i=2;i<=n;i++)
//    {
//        if(isPrime(i)) //判断素数
//            vt.push_back(i);
//    }
//    for(int i=0;i<vt.size();i++)
//    {
//        if((vt[i+1] - vt[i])==2)
//            count++;
//    }
//    cout<<count;
//    return 0;
//}