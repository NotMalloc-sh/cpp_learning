#include <iostream>
using namespace std;

string sayhi(string name){
    cout << "HI " << name;
}

int main(){
    string name;
    cout << "whats ur name" << endl;
    cout << ">>";
    cin >> name;

    cout << sayhi(name);
}

