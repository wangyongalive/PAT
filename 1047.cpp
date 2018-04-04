////
//// Created by admin1 on 2018/1/21.
//// 将队伍编号作为数组索引即可方便地累加同队队员的成绩。
//// 队伍编号当做数组的index
//#include <iostream>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int to_num(string c) {
//    int result = 0;
//    for (int i = 0; i < c.length(); i++) {
//        result = (c[i] - '0') + result * 10;
//    }
//    return result;
//}
//
//int main() {
//    int num, teams[1001] = {0};
//    string s1, s2;
//    cin >> num;
//    for (int i = 0; i < num; i++) {
//        cin >> s1 >> s2;
//        teams[to_num((s1.substr(0, s1.find('-'))).c_str())] += to_num(s2);
//
//    }
//    int temp = 0, index = 0;
//    for (int i = 0; i < 1001; i++) {   // 搜索最大值
//        if (teams[i] > temp) {
//            temp = teams[i];
//            index = i;
//        }
//    }
//    cout << index << " " << temp;
//    return 0;
//}
//
