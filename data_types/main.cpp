//
//  main.cpp
//  data_types
//
//  Created by 刘亦畅 on 2018/5/26.
//  Copyright © 2018年 刘亦畅. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    /*
     Part I
     */
    
//    bool a = 42;
//    int ia = a, i = 3.14;
//    double pi = i;
//    char c = -1;
//    unsigned char cu = 64;
//    signed char cs = 256;
//
//    cout << "a, ia, i, pi, c, cu, cs:"<<endl;
//    cout << a <<","<< ia <<","<< i <<","
//    << pi <<","<< c<<","<< cu <<","<< cs; // cs out of range, so it's not defined.

    /*
     Part II
     */
    
    unsigned u = 10;
    int i = -42;
    cout << i + i << endl; //输出 -84
    cout << u + i <<"\tHaha!"<< endl; //输出 4294967264
    return 0;
}
