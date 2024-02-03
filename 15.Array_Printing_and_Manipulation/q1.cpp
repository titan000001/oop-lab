#include<bits/stdc++.h>
using namespace std;

int main(){
    int size = 5;
    int myArr[size] = {1,2,3,4,5};

    cout << "My default array is: \n";
    for(int i = 0; i < size; i++){
        cout << myArr[i] << " ";
    }
    int start = 0;
    int end = size -1;

    swap(myArr[start], myArr[end]);
    start++;
    end--;

    cout << "\nThe reversed array is: \n";
    for(int i = 0; i < size; i++){
        cout << myArr[i] << " ";
    }

return 0;
}
