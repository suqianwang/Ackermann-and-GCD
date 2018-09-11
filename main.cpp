// Suqian Wang Section 502
//
//  main.cpp
//  222 programming project
//
//  Created by Susan Wang on 3/19/17.
//  Copyright © 2017 Suqian Wang. All rights reserved.
//

#include <iostream>
using namespace std;

int count1 = 0, count2 = 0;

int gcd(int a, int b) {
    cout << "(" << a << ", " << b << ")" << endl;
    count1 = count1 + 1;
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int ackermann(int m, int n) {
    count2 = count2 + 1;
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

int main() {
    int a, b, m, n;
    cout << "implementing the gcd function now." << endl;
    cout << "input two positive integers as the arguments: " << endl;
    cin >> a >> b;
    if (a <= 0 || b < 0) {
        cout << "Invalid Input. Please input two positive integers as the arguments again" << endl;
        cin >> a >> b;
    }
    cout << "the result is : " << endl;
    cout << gcd(a, b);
    cout << endl << "the function have been invoked " << count1 << " times." << endl;
    
    
    cout << "implementing the Ackermann function now." << endl;
    cout << "input two nonnegative integers as the arguments: " << endl;
    cin >> m >> n;
    if (m < 0 || n < 0) {
        cout << "Invalid Input. Please input two nonnegative integers as the arguments again" << endl;
        cin >> m >> n;
    }
    cout << "the result is : " << endl;
    cout << ackermann(m, n);
    cout << endl << "the function have been invoked " << count2 << " times." << endl;
    
    return 0;
}
