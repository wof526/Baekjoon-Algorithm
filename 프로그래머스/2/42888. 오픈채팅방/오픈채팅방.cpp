
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    //enter
    //uid1234 = MUZI,   최종 record 에서 uid1234 님이 들어왔습니다. uid1234 일괄 변경
    // case enter, leave, change > ... 셋으로 (uid, )
    // enter > 들어왔습니다 .. > uid1234 (딕셔너리? 셋에 있는 key 면 > 뒤 닉네임으로 변경)
        //셋에 없는 Key면 >> 뒤 닉네임 + uid 추가
    
    map<string, string> m;
    map<string, string> :: iterator iter;
    
    string command, uid, nickname;

    for (int i = 0; i < record.size(); i++) {
        stringstream ss(record[i]);
        ss >> command >> uid;

        if (command == "Enter" || command == "Change") {
            ss >> nickname;  
            m[uid] = nickname;  
        }
    }
    
    for(int j = 0; j<record.size(); j++){
        stringstream ss(record[j]);
        ss >> command >> uid;
        if(command == "Enter")
            answer.push_back(m[uid]+"님이 들어왔습니다.");
        else if(command == "Leave") 
            answer.push_back(m[uid]+"님이 나갔습니다.");
    }
    
    
    //걍 for 문으로 다 돌면서 uid 와 닉네임 매칭
    // 다시 for문으로 돌면서 명령문과 uid 매칭
    return answer;
}