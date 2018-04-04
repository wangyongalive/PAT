////
//// Created by admin1 on 2018/1/21.
////得出结果就直接输出
////
////
//
//#include <iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//    int full[101] = {0}, answer[101] = {0};
//    int n, m; //n是人数 m是判断题个数
//    cin >> n >> m;
//    for (int i = 0; i < m; ++i) {  //每道题的满分值
//        cin >> full[i];
//    }
//    for (int j = 0; j < m; ++j) {  // 每道题的正确答案
//        cin >> answer[j];
//    }
//    for (int k = 0; k < n; ++k) {
//        int sorce = 0, choice;
//        for (int i = 0; i < m; ++i) {
//            cin >> choice;
//            if (answer[i] == choice) {
//                sorce += full[i];
//            }
//        }
//        cout << sorce << endl; // 得出结果就直接输出
//    }
//    return 0;
//}