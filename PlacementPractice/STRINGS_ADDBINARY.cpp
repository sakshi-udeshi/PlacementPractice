//
//  STRINGS_ ADDBINARY.cpp
//  PlacementPractice
//
//  Created by Sakshi Udeshi on 12/12/15.
//  Copyright © 2015 Sakshi Udeshi. All rights reserved.
//

#include "STRINGS_ADDBINARY.hpp"
using namespace std;
string addBinary(string A, string B) {
    string res_str = "";
    long long a_int = 0;
    for (int i = 0; i < A.size(); i++) {
        a_int = (a_int * 2) + (A[i] - '0');
    }
    long long b_int = 0;
    for (int i = 0; i < B.size(); i++) {
        b_int = (b_int * 2) + (B[i] - '0');
    }
    // cout << "a b are " << a_int << " " << b_int << endl;
    long long res = a_int + b_int;
    while (res > 0) {
        res_str = res_str + std::to_string(res % 2);
        res = res/2;
    }
    // return to_string(a_int + b_int)
    return res_str;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

int main() {
    cout << addBinary("1010110111001101101000", "1000011011000000111100110") << endl;
    return 0;
}
