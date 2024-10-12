#include<iostream>
using namespace std;


int power(int x, int y){
    int ans = x;
    for (int i = 1; i <= y; i++)
    {
        ans =  ans* y;
    }
    return ans;
}

int factorial(int x){
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans *= i;
    }
    return ans;
}

int nCr(int n, int r){
    int factorialN = factorial(n);
    int factorialR = factorial(r);
    int nr = factorial(n-r);
    int ans = factorialN/(factorialR*nr);
    return ans;
}

int main(){
    // int ans = power(2,2);
    int ans = nCr(5,4);
    cout << ans << endl;
    return 0;
}