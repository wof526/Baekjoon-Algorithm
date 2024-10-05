#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int k, int d) {
    long long answer = 0;
    
    for(int i = 0; i<=d; i+=k){
        int count = floor(sqrt(pow(d,2)-pow(i,2)) / k );
        answer += count + 1;
    }
    
    
    return answer;
}