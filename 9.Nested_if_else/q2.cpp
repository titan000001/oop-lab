#include<bits/stdc++.h>
using namespace std;

int main(){
    double weight;
    int def_cost = 5;
    cout << "Enter the weight of your shipment in kg: \n";
    cin >> weight;

    if (weight < 5)
    {
        cout << "Your cost will be " << def_cost + (weight * 2) << "tk";
    }
    else if (weight >= 5 && weight <20)
    {
        cout << "Your cost will be " << def_cost + (weight * 3) << "tk";
    }
    else if ( weight >= 20)
    {
        cout << "Your cost will be " << def_cost + (weight * 4) << "tk";
    }
    else
    {
        cout << "Enter a valid weight";
    }
return 0;
}