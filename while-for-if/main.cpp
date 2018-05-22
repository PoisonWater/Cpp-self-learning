//
//  main.cpp
//  while-for-if
//
//  Created by 刘亦畅 on 2018/5/22.
//  Copyright © 2018年 刘亦畅. All rights reserved.
//

#include <iostream>
using namespace std;

//int main()
//{
//    int sum = 0, val = 1;
//    while (val <= 100){
//        sum += val;
//        ++val;
//        cout << "val: " << val << " ; sum: " << sum << endl;
//    }
//    return 0;
//}

//int main() {
//    int sum = 0;
//    for (int val = 1; val <= 100; ++val){
//        sum += val;
//        cout << "val: " << val << " ; sum: " << sum << endl;
//    }
//    return 0;
//}

int main(){
    int currval = 0, val = 0;
    // currval 是正在统计的数据；val是新值
    if (cin>>currval){
        int cnt = 1;
        while (cin>>val){ // 输入ctrl+D 结束输入 使语句跳转至46行运行并结束程序
            if (val == currval)
                ++cnt;
            else{
                cout << currval << " occurs " << cnt << " times."<< endl;
                currval = val;
                cnt = 1;
            }
        }
        cout << currval << " occurs " << cnt << " times."<< endl;
    }
    return 0;
}
