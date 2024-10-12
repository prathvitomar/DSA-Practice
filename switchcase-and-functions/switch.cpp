#include<iostream>
using namespace std;
int main(){
    int num = 3;
    char ch = 'a';

    switch(num){
        case 1 : cout << num << " 1st";
                 break;

        case 2 : cout << num+1<< " 2nd";
                 break;

        case 3 : switch(ch){
            case 'a': cout << " a ";
                      break;

            case 'b': cout << " b ";
                      break;
                      
        }
    }


    return 0;
}