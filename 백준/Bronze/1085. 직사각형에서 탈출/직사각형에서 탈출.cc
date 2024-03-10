#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int w,h,x,y;
    int xleast,yleast,least;
    cin>> x >> y >> w >> h;

    if(x>w-x) xleast = w-x;
    else xleast = x;
    
    if(y>h-y) yleast = h-y;
    else  yleast = y;
    
    if(yleast>xleast) cout << xleast;
    else cout << yleast;
}
