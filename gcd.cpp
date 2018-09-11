// Suqian Wang Section 502
//
//  gcd.cpp
//  222 programming project
//
//  Created by Susan Wang on 3/19/17.
//  Copyright © 2017 Suqian Wang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    cout << "(" << a << ", " << b << ")" << endl;
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}
