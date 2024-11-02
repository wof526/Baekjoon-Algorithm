#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    int i = 0;
    for( int j = 0; j < overwrite_string.length(); j++){
        my_string[s] = overwrite_string[i];
        i++; s++;
    }
    
    return my_string;
}