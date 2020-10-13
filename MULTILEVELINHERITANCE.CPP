#include<iostream>
using namespace std;
class vehicle{
protected:
    int noofwheels = 4;
    char engno[10] = "2";
};
class car : public vehicle {
protected:
    char color[10]= "Blue";
};
class audi :  public car
{
private:
    char regno[10] = "4119008";
public:
    displaydata()
    {
        cout << "The details are:-" << endl;
        cout << "The number of wheels are : " << noofwheels << endl;
        cout << "The engine number is : " << engno << endl;
        cout << "The color of the car is : " << color << endl;
        cout << "The registration number is : " << regno << endl;
    }
};
main()
{
    audi a;
    a.displaydata();

}
