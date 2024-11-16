#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    stringstream ss;
    
    ss<<a<<b;
    int result1;
    ss>>result1;
    
    
    ss.clear();
    ss<<b<<a;
    int result2;
    ss>>result2;
    
    return (result1<result2) ? result2 : result1;
}