//
//  ARRAYS_ MAXGAP.cpp
//  PlacementPractice
//
//  Created by Sakshi Udeshi on 12/13/15.
//  Copyright © 2015 Sakshi Udeshi. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int maximumGap(const vector<int> &A) {
    int max_gap = 0;
    if(A.size() < 2) return 0;
    int biggest = -1;
    for (int i = 0; i < A.size(); i++) {
        biggest = max(biggest, A[i]);
    }
    vector<bool> arr;
    arr.resize(biggest + 1);
    for (int i = 0; i < A.size(); i++) {
        arr[A[i]] = true;
    }
    vector<int> sorted;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i]) {
            sorted.push_back(i);
            // cout << "pushing " << arr
        }
    }
    for (int i = 1; i < sorted.size(); i++) {
        // cout << "sorted is " << sorted[i] << " " << sorted[i - 1] << endl;
        max_gap = max(max_gap, sorted[i] - sorted[i - 1]);
    }
    
    return max_gap;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

int main() {
    
}

