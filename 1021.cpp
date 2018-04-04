////
//// Created by admin1 on 2018/1/21.
////switch 语句
////
//#include <iostream>
//#include <string>
//using namespace std;
//int to_num(char c)
//{
//    int num;
//switch (c - '0')
//{
//case 0: num = 0;break;
//case 1: num = 1;break;
//case 2: num = 2;break;
//case 3: num = 3;break;
//case 4: num = 4;break;
//case 5: num = 5;break;
//case 6: num = 6;break;
//case 7: num = 7;break;
//case 8: num = 8;break;
//case 9: num = 9;break;
//}
//    return num;
//}
//int main()
//{
//    string s;
//    int nums[10]={0}; // 置为0
//    cin>>s;
//    for(int i =0;i < s.size();i++)
//    {
//
//        switch (to_num(s[i]))
//        {
//            case 0: nums[0]++;break;
//            case 1: nums[1]++;break;
//            case 2: nums[2]++;break;
//            case 3: nums[3]++;break;
//            case 4: nums[4]++;break;
//            case 5: nums[5]++;break;
//            case 6: nums[6]++;break;
//            case 7: nums[7]++;break;
//            case 8: nums[8]++;break;
//            case 9: nums[9]++;break;
//        }
//
//    }
//    for(int i =0;i < 10;i++)
//    {
//        if(nums[i]!=0)
//            cout<<i<<":"<<nums[i]<<endl;
//
//    }
//}