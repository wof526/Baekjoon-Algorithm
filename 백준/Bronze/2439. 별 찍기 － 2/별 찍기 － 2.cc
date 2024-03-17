#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    for(int i = 1; i<= n; i++){
        for(int j = 0; j < n-i ; j++)
        cout << " ";
        for(int k = 0; k<i;k++)
        cout << "*";
        cout << "\n";
    }
}