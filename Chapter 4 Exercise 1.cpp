#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int minimum, maximum;

    cout << "Enter two different integers: ";
    cin >> num1 >> num2;

    minimum = (num1 < num2) ? num1 : num2;
    maximum = (num1 > num2) ? num1 : num2;

    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;

    return 0;
}
