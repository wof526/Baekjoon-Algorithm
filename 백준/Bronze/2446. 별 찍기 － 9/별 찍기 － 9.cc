#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[]){
    int n;

    cin >> n;
    
    int final = 2*n-1;

    for(int i = 0; i<2*n-1; i++){
        if(i<n){
            for(int j = 0; j<i; j++){
            cout << " ";
            }
            for(int k = 0; k<final-(i*2); k++){
            cout << "*";
            }
        }
        else{
            for(int j = 1; j<final-i; j++){
                cout << " ";//i=5 +=3 ,6 2 ,7 1,8 0
            }
            for(int k = -2; k<i-(final-i);k++){
                cout << "*";
            }     
        }
        cout <<"\n";
    }
}