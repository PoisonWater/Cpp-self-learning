//
//  main.cpp
//  bookstore
//
//  Created by 刘亦畅 on 2018/5/23.
//  Copyright © 2018年 刘亦畅. All rights reserved.
//

#include <iostream>
#include "Sales_item.h" // 调用 class 对象头文件

using namespace std;
//int main() {
//    Sales_item book1, book2;
//    cout << "ISBN, numSold, priceEach: ";
//    cin >> book1 >> book2;
//    if (book1.isbn() == book2.isbn()) {
//        cout << book1 + book2 << endl;
//        return 0;
//    } else {
//        cout << "Different ISBN cannot be added.\n";
//        return -1;
//    }
//}

int main() {
    Sales_item total;
    if (cin >> total){
        Sales_item trans;
        while (cin >> trans){
            if (total.isbn() == trans.isbn()){
                total += trans;
            }
            else {
                cout << total << endl;
                total = trans;
            }
        }
    }
    else {
        cout << "No input!" << endl;
        return -1;
    }
    return 0;
}
