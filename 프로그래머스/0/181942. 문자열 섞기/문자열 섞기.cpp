#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    for(int i = 0; str1[i] != '\0'; i++){
        answer += str1[i];
        answer += str2[i];
    }
    
    return answer;
}