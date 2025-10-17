#include <iostream>
using namespace std;

void sayhi(string name){
    cout << "HI " << name;
}

int main(){
    string name;
    cout << "whats ur name" << endl;
    cout << ">>";
    cin >> name;

    sayhi(name);
}

