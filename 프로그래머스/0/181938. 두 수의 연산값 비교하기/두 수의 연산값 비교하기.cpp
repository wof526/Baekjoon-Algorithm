#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    stringstream ss;
    
    ss<<a<<b;
    
    int num1;
    ss>>num1;
    int num2 = 2 * a* b;
    return (num1 > num2)? num1 : num2;
}