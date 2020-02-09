//
//  main.cpp
//  적어도 대부분의 배수
//
//  Created by 어수민 on 2020/02/09.
//  Copyright © 2020 어수민. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r;
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(int argc, const char * argv[]) {
    int n;
    vector<int> temp;
    vector<int> result;
    for(int i=0;i<5;i++){
        cin >> n;
        temp.push_back(n);
    }
    sort(temp.begin(), temp.end());
    
    do{
        for(int i=0;i<3;i++){
            int a = lcm(temp[i], temp[i+1]);
            a = lcm(a, temp[i+2]);
            result.push_back(a);
        }
    }while(next_permutation(temp.begin(), temp.end()));
           
    sort(result.begin(), result.end());
    
    cout << result[0] << '\n';
    return 0;
}
