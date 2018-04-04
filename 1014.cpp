//一边得出结果 一边输出
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s1, s2, s3, s4;
//    cin>>s1>>s2>>s3>>s4;
//    int i; //全局变量i来扫描字符串
//    for( i = 0;; i++)
//    {
//        if( s1[i] >= 'A' && s1[i] <= 'G' && s1[i] == s2[i])
//        {
//            switch(s1[i] - 'A')  // switch语句 字符-字符  得到一个数
//            {
//                case 0:cout<<"MON ";break;
//                case 1:cout<<"TUE ";break;
//                case 2:cout<<"WED ";break;
//                case 3:cout<<"THU ";break;
//                case 4:cout<<"FRI ";break;
//                case 5:cout<<"SAT ";break;
//                case 6:cout<<"SUN ";break;
//            }
//            break;
//        }
//    }
//    for(++i;; ++i) //i要加1
//    {
//        if( s1[i] >= 'A' && s1[i] <= 'N' && s1[i] == s2[i])
//        {
//            cout<<s1[i]-'A' + 10<<":";
//            break;
//        }
//        else if(s1[i] >= '0' && s1[i] <= '9' && s1[i] == s2[i])
//        {
//            cout<<"0"<<s1[i] - '0'<<":";
//            break;
//        }
//    }
//
//    for( i = 0;; ++i)
//    {
//        if(s3[i] >= 'a' &&s3[i] <='z' && s3[i] == s4[i])
//        {
//            if(i < 9)
//                cout<<"0"<<i<<endl;
//            else
//                cout<<i<<endl;
//            break;
//        }
//        else if(s3[i] >= 'A' &&s3[i] <='Z' && s3[i] == s4[i])
//        {
//            if(i < 9)
//                cout<<"0"<<i<<endl;
//            else
//                cout<<i<<endl;
//            break;
//        }
//    }
//    return 0;
//}