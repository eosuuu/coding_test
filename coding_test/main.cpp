//
//  main.cpp
//  coding_test
//
//  Created by 어수민 on 2020/02/01.
//  Copyright © 2020 어수민. All rights reserved.
//

#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    deque<int> q = {1,2,3,4,5};
    stack<int> s1(q);
    
    for(auto x : s){
        cout << x << '\n';
    }
    
    return 0;
}
