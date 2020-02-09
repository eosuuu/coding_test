//
//  main.cpp
//  사탕게임
//
//  Created by 어수민 on 2020/02/09.
//  Copyright © 2020 어수민. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int other = 0;
vector<vector<char>> board(100);
int n;

//가로축 제일 많은 사탕개수
void check(){
    for(int i=0;i<n;i++){
        int sum=1;
        for(int j=1;j<n;j++){
            if(board[i][j-1] == board[i][j]){
                sum +=1;
            }
            else{
                other = max(other, sum);
                sum=1;
            }
        }
        other = max(other,sum);
    }

    //세로축 가장 많은 개수
    for(int i=0;i<n;i++){
        int sum=1;
        for(int j=1;j<n;j++){
            if(board[j-1][i] == board[j][i]){
                sum+=1;
            }
            else{
                other = max(other, sum);
                sum =1;
            }
        }
    other = max(other, sum);

    }
}

int main(int argc, const char * argv[]) {
    cin >> n;
    string candy;
    //캔디배치
    for(int i=0;i<n;i++){
        cin >> candy;
        for(int j=0;j<n;j++){
            board[i].push_back(candy[j]);
        }
    }

    //
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j+1<n){
                swap(board[i][j],board[i][j+1]);
                check();
                swap(board[i][j],board[i][j+1]);
            }
            if(i+1<n){
                swap(board[i][j], board[i+1][j]);
                check();
                swap(board[i][j],board[i+1][j]);
            }
        }
    }
    
    cout << other;

        
    return 0;
}
