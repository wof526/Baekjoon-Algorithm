#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    std::sort(score.begin(), score.end(),std::greater<int>());
    
    for(int i = m-1; i <= score.size() ; i = i + m){
        answer += score[i] * m;
    }
 
    return answer;
}