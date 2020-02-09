//
//  main.cpp
//  일곱난쟁이
//
//  Created by 어수민 on 2020/02/09.
//  Copyright © 2020 어수민. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int height;
    int result = 0;
    vector<int> seven;
    

    for(int i=0;i<9;i++){
        cin >> height;
        seven.push_back(height);
    }
    
    sort(seven.begin(),seven.end());
    
    do{
        
        for(int i=0;i<7;i++){
            result += seven[i];
        }
        if(result == 100) break;
        result = 0;
        
        
    }while(next_permutation(seven.begin(), seven.end()));
    
    
    for(int i=0;i<7;i++){
        cout << seven[i] << '\n';
    }
    
    return 0;
}
