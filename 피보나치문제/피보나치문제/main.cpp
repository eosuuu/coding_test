//
//  main.cpp
//  피보나치문제
//
//  Created by 어수민 on 2020/02/01.
//  Copyright © 2020 어수민. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int memo[100];
 

//Top-Down 방식 풀이
int fibo (int n){
    if (n<=1){
        return n;
    }
    else {
        //memo에 있는 값은 모두 0이고, 한번이라도 메모가 되면 그건 0보다 클 것이다. 그러므로 메모에 있는 값은 계산은 안해도되는 것이다.
        if(memo[n] > 0){
            return memo[n];
        }
        memo[n] = fibo(n-1) + fibo(n-2);
        return memo[n];
    }
}


//Bottom-Up 방식 풀이
int fibo2 (int n){
    memo[0] = 0;
    memo[1] = 1;
    
    //예외를 처리하고 남은 i=2부터 1씩 증가시켜서 모든 문제를 푸는것
    for(int i=2;i<=n;i++){
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n];
}

int main(int argc, const char * argv[]) {
    
    cout << fibo(9) << '\n';
    cout << fibo2(9) << '\n';
    return 0;
}
