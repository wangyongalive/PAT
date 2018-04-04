//////
////// Created by admin1 on 2018/1/12.
//////1.判断是不是素数
//////2.注意输出格式
//////
//
//#include <string>
//#include<iostream>
//#include <cstdio>
//#include<cmath>
//#include <vector>
//#include <stdlib.h>
//#include <map>
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
//    int n,m;
//    long int count;
//    vector<int> vi;
//    cin>>n>>m;
//    for(int count=2;;count++)
//    {
//        if(isPrime(count))
//            vi.push_back(count);  //质数加入vector中
//        if(vi.size() == m)
//            break;
//    }
//    for(int i= n-1;i<m-1;i++)
//    {
//        if((i-n)%10 == 8)
//           cout<<vi[i]<<endl;
//        else
//        {
//            cout<<vi[i]<<" ";
//        }
//    }
//    cout<<vi[m-1];  //输出最后一个
//    return 0;
//}