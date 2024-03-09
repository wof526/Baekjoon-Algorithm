#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int hour;
    int min;
    int need;

    cin>>hour>>min>>need;

    int resHour=((hour*60)+min+need) / 60;
    int resMin = ((hour*60)+min+need) % 60;

    if(resHour >= 24){
        resHour = resHour - ((resHour / 24)*24);
    }
    cout<<resHour<<" "<<resMin;

}