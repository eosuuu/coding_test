//
//  main.cpp
//  temp
//
//  Created by 어수민 on 2020/02/04.
//  Copyright © 2020 어수민. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    map<int, string> temp;
    temp[0] = "he";
    temp[1] = "g";
    temp[2] = "c";
    cout << temp.find('0');
//    for(auto p : temp){
//        cout << p.first << p.second << '\n';
//    }
    return 0;
}
