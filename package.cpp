#include <iostream>

using namespace std;

int main()
{
    float package;

    cout << "Please enter the weight of the packaged being shipped: ";
    cin >> package;
    
    if (package <= 2 && package > 0) // packages 2kg and under
    {
        cout << "Shipping Cost: $1.10";
    }

    if(package > 2 && package <= 6) // 2 - 6kg packages
    {
        cout << "Shipping Cost: $2.20";
    }

    if(package <= 10 && package > 6) // 10- over 6kg packages
    {
        cout << "Shipping Cost: $3.70";
    
    }
    if(package <= 20 && package > 10) // over 10kg and under 20kg packages
    {
        cout << "Shipping Cost: $4.80";
    }

    else if(package <= 0 || package > 20) //error msg packages can't weight nothing and there is a 20 pound limit
    cout << "Please enter a valid input, We do not accept packages that weigh more than 20kg\nand do not accept 0kg as a valid input";
    
    return 0;
}
