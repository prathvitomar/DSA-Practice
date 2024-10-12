#include<iostream>
using namespace std;
int main(){
    int ans = 0;
    int input1, input2;
    char operation;

    cout << "Please enter 1st input : ";
    cin >> input1;
    
    cout << "Please enter 2nd input : ";
    cin >> input2;

    cout << "Choose operation ('/', '*', '+', '-'): ";
    cin >> operation;

    switch(operation){
        case '*': ans = input1*input2;
                  break;
        case '/': ans = input1/input2;
                  break;
        case '+': ans = input1+input2;
                  break;
        case '-': ans = input1-input2;
                  break;
        default: 
            cout << "Invalid operation." << endl;
            return 1;
    }
    cout << "Result: " << ans << endl;


    return 0;
}