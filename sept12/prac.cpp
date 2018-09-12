#include <iostream>
using namespace std;

int main()
{
    int length, width, area;
    
    //Enter numbers
    cout << "Enter length and width seperated by a space : ";
    cin >> length >> width;

    //compute
    area = length * width;

    //output
    cout << "The area is : " << area;

    return 0;
}
