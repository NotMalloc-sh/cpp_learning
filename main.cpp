#include <iostream>
using namespace std;

int factorial(int n){
    if(n < 0){
        cerr << "[-] just positive numbers!" << endl;
        return -1;
    }
    int answer = 1;
    for(int i=1; i <= n; i++){
        answer = answer * i;
    }
    return answer;
}

int main(){
    int n;

    cout << "[?] Choose a number: ";
    cin >> n;

    int result = factorial(n);
    cout << "[+]result: " << result << endl;

}
