//
//  main.cpp
//  multiple-input
//
//  Created by 刘亦畅 on 2018/5/22.
//  Copyright © 2018年 刘亦畅. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0, value = 0;
    cout << "Enter numbers here: ";
    while (cin >> value) // Input需输入文件结束符 ctrl+D
        sum += value;
    cout << "Sum is: " << sum << endl;
    return 0;
}
