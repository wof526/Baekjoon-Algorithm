#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    int i = 0;
    while(i<arr.size()){
        answer += arr[i];
        i++;
    }
    return answer;
}