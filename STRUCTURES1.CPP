#include<iostream>
using namespace std;
struct bike{
    int lno;
    char driver[20];
    float miles;
};
int main()
{
    bike b1;
    cout << "Enter the following details : \n1. License Number : \t";
    cin >> b1.lno;
    cout << "\n2. Name of the driver : \t";
    cin >> b1.driver;
    cout << "\n3. Number of miles : \t";
    cin >> b1.miles;
    //Displaying the result
    cout << "\nYou entered: \n" << "1.License number : " << b1.lno;
    cout << "\n2. Name of the driver : " << b1.driver;
    cout <<  "\n3.Number of miles : " << b1.miles;
}
