#include <iostream>
using namespace std;

void calFor() {
    for(int i = 0; i <= 5; i++){
        cout<<i<<" ";
    }
}

void calWhile(){
    int i = 0;
    while(i <= 5){
        // cout<<endl;
        cout<<i<<" ";
        i++;
    }
}

int main(){
    calFor();
    cout<<endl;
    calWhile();
    return 0;
}

