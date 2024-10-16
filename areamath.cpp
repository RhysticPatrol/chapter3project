#include <iostream>
#include <cmath>

using namespace std;
int  main()
{
    int number;
    cout << "Please enter an option below (please use the numbers provided):\n1. area of a circle\n2.area of a rectangle\n3. area off a triangle\n4.Quit\n";
//finding the area of desired shape
    cin >> number;

    switch(number){

    case 1: //area of a circle
    cout << "you have selected area of a circle. Please enter the radius:";
    double radius;
    cin >> radius;
    cout << 3.14159 * pow(radius,2); //pie * raidus squared
    break;

    case 2: //area of a rectangle
    cout << "You have selected the area of a rectange option. Please enter the length of the rectangle";
    double length;
    cin >> length;
    cout << "Now enter the width of the rectangle";
    double width;
    cin >> width;
    cout << length * width;
    break;

    case 3: //area of a triangle
    cout << "You have selected the area of a triangle option. Please enter the base of the triangle";
    double base;
    cin >> base;
    cout << "Now enter the height of the traingle";
    double height;
    cin >> height;
    cout << height * base * 0.5;
    break;

    case 4: //ending of program if not selected
    return 0;
    break;

    default: //invalid input
    cout << "you failed to enter a valid number. goodbye";

    
    }

    




}