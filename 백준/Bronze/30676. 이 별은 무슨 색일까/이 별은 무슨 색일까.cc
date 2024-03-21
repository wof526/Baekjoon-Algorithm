#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int ramda = 0;
    
    cin >> ramda;
    
    if(ramda >= 620 && ramda <= 780) cout<< "Red";
    else if (ramda >= 590 && ramda < 620) cout<< "Orange";
    else if (ramda >= 570 && ramda < 590) cout<< "Yellow";
    else if (ramda >= 495 && ramda < 570) cout<< "Green";
    else if (ramda >= 450 && ramda < 495) cout<< "Blue";
    else if (ramda >= 425 && ramda < 450) cout<< "Indigo";
    else if (ramda >= 380 && ramda < 425) cout<< "Violet"; 
}