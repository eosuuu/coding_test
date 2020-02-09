//
//  main.cpp
//  1로만들기
//
//  Created by 어수민 on 2020/02/01.
//  Copyright © 2020 어수민. All rights reserved.
//

#include <iostream>

int d[100];
//Top-Down 방법
int go(int n){
    if(n==1) {
        return 0;
    }
    if(d[n]>0) return d[n];
    d[n] = d[n-1] + 1;
    if(n % 2 == 0){
        int temp = go(n/2) + 1;
        if(d[n] > temp) d[n] = temp;
    }
    if(n%3 ==0){
        int temp = go(n/3) + 1;
        if(d[n] > temp) d[n] = temp;
    }
    return d[n];
}

int go2(int n){
    d[1] = 0;
    for(int i=2;i<=n;i++){
        d[i] = d[i-1] + 1;
        if(i % 2 == 0 && d[i] > d[i/2]+1){
            d[i] = d[i/2] + 1;
        }
        if(i%3 == 0 && d[i] > d[i/3] + 1){
            d[i] = d[i/3]+1;
        }
        
    }
    return d[n];
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
