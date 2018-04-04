////
//// Created by admin1 on 2018/1/11.
//
//#include <string>
//#include<iostream>
//#include <cstdio>
//#include<iostream>
//#include<cmath>
//#include <vector>
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//    vector<string> vs;
//    string temp;
//    string str;
//    getline(cin, str);
//    for(int i = 0;i<str.length();i++)
//    {
//        if(str[i] !=' ') //非空格
//        {
//            temp +=str[i];
//        }
//        else
//        {
//            vs.push_back(temp);
//            temp.clear(); //清空
//        }
//    }
//    vs.push_back(temp);
//    if(vs.size() <3)
//    {
//        cout<<"0 0";
//        return 0;
//    }
//    for(int i = 0;i<vs.size();i=i+2)
//    {
//        int n1=atoi(vs[i].c_str());
//        int n2=atoi(vs[i+1].c_str());
//        int r1 = n1*n2;
//        int r2 =n2 -1;
//        if(r1)
//            if(i == (vs.size() - 2))
//                cout<<r1<<" "<<r2;
//            else
//                cout<<r1<<" "<<r2<<" ";
//    }
//    return 0;
//}