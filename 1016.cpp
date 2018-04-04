//// Created by admin1 on 2018/1/23.
//// 先计算有几个字符
//// 字符*111...
////
//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//int find(string s, char c) {
//    int count = 0;
//    int temp = 0;
//    for (int i = 0; i < s.length(); ++i) {
//        if (s[i] == c) { count++; }
//    }
//    for (int j = 0; j < count; ++j) {
//        temp = temp * 10 + 1;
//    }
////    cout<<temp<<" ";
//    return temp * (c - '0');
//}
//
//int main() {
//    string s1, s2;
//    char c1, c2;
//    cin >> s1 >> c1 >> s2 >> c2;
////    cout << find(s1, c1);
////    cout<<find(s2,c2);
//    cout << find(s1, c1) + find(s2, c2);
//    return 0;
//}
