////
//// Created by admin1 on 2018/1/10.
////思路
////   只需要3组变量即可：最高、最低和当前。边读取边更新。
////代码实现：
////   成绩的最高、最低初始化为-1和101，这样方便地处理了特殊情况。
////
//#include <string>
//#include<iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//
//    int n;
//    string name[2], id[2], curName, curId;
//    int grade[2] ={ -1, 101}, curGrade;
//    cin>>n;
//    for(int i = 0;i < n; i++)
//    {
//        cin>>curName>>curId>>curGrade;
//        if(curGrade > grade[0])
//        {
//            name[0].clear();
//            name[0].replace(0,curName.length()-1,curName);
//            id[0].clear();
//            id[0].replace(0,curId.length()-1,curId);
//            grade[0] = curGrade;
//        }
//        if(curGrade < grade[1])
//        {
//            name[1].clear();
//            name[1].replace(0,curName.length()-1,curName);
//            id[1].clear();
//            id[1].replace(0,curId.length()-1,curId);
//            grade[1] = curGrade;
//        }
//    }
//    cout<<name[0]<<" "<<id[0]<<endl;
//    cout<<name[1]<<" "<<id[1]<<endl;
//    return 0;
//}
//

