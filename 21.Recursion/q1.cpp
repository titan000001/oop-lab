#include <iostream>
using namespace std;

int sumRecursive(int n){
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumRecursive(n-1);
    }
    
}

int main(){
    int n;

    cout << "Enter a positive integer : " << endl ;
    cin >> n ;

    if (n < 0)
    {
        cout << "Please enter a positive integer.";
        return 1;
    }
    else{
        int result = sumRecursive(n);
        cout << "The sum of 1 to " << n << " is " << result;
    }
    return 0;
}