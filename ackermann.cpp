// Suqian Wang Section 502
//
//  ackermann.cpp
//  222 programming project
//
//  Created by Susan Wang on 3/19/17.
//  Copyright © 2017 Suqian Wang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int ackermann(int m, int n) {
    cout << "(" << m << ", " << n << ")" << " ";
    if (m == 0) {
        return (n+1);
    }
    else if (n == 0) {
        return ackermann(m-1, 1);
    }
    else {
        return ackermann(m-1, ackermann(m, n-1));
    }
}
