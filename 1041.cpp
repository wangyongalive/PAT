////
//// Created by admin1 on 2018/1/23.
////数组开的大一些  避免出界
////结构体
////按照sjid的值来存贮
////
//#include <iostream>
//
//using namespace std;
//struct
//stu {
//    string id;
//    int sjid;
//    int ksid;
//};
//
//int main() {
//    string st;
//    int isj, iks;
//    stu a[1001];
//    int n, m;
//    int query[1001];
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
////        准考证号 试机座位号 考试座位号
//        cin >> st >> isj >> iks;
//        a[isj].id = st;
//        a[isj].sjid = isj;  //按照sjid的值来存贮
//        a[isj].ksid = iks;
//    }
//    cin >> m;
//
//    for (int j = 0; j < m; ++j) {
//        cin >> query[j];
//        cout << a[query[j]].id << " " << a[query[j]].ksid << endl;
//    }
//
//}
