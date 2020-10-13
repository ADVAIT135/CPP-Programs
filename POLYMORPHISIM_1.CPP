#include<iostream>
using namespace std;
int area (int s);
int area (int l, int b);
main()
{
    cout << "pick any one :\n1. Square\n2. Rectangle\n3. Exit" << endl;
    int ch,s,l,b;
    cin >> ch;
    switch(ch)
    {
    case 1:
        cout << "Enter the side : " << endl;
        cin >> s;
        cout << "The area of the square is : " << area(s) << endl;
        break;
    case 2:
        cout << "Enter the length and breadth : " << endl;
        cin >> l,b;
        cout << "The area of the square is : " << area(l,b) << endl;
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "Invalid choice." << endl;
    }
}
int area(int s)
{
    int a = s*s;
    return a;
}
int area(int l,int b)
{
    int a = l*b;
    return a;

}
