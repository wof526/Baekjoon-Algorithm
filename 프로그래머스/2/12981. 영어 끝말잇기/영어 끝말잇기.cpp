#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0,0};
 
    string record;
    std::unordered_set<string> prevWordSet;
    char prevChar, nowChar;
    
    for(int i = 0; i<words.size() ; i++){
        record = words[i];
        if(i == 0) prevChar = record.front();
        nowChar = record.front();
        
        if(nowChar != prevChar || prevWordSet.find(record) != prevWordSet.end()) {
            answer[0] =(i % n + 1);
            answer[1] =(i / n + 1);
            break;
        } 
        prevChar = record.back();
        prevWordSet.insert(record);
    }
    return answer;
    
}