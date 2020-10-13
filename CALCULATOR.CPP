#include<iostream>
using namespace std;
int main()
{
    int c = 0;
    int a,b;
    cout << "Enter two numbers:-" << endl;
    cin >> a;
    cin >> b;
    cout << "Pick an option: \n1: ADD\n2: SUBTRACT\n3: MULTIPLY\n4: DIVIDE\n5: QUIT\nYour Choice:";
    cin >> c;
    switch(c)
    {
    case 1:cout << "Addition is: "<< a+b ;
    break;
    case 2:cout << "Subtraction is: "<< a-b ;
    break;
    case 3:cout << "Multiplication is: "<< a*b ;
    break;
    case 4:cout << "Division is: "<< a/b ;
    break;
    case 5: exit(0);
    break;
    default: cout << "Invalid choice";
    }
}
