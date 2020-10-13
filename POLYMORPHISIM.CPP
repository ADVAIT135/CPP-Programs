#include<iostream>
using namespace std;
class shape
{
protected:
    int width,height;
public:
    shape(int a =0, int b =0){
        width = a;
        height = b;
    }
    int area(){
        cout << "Parent class area : " << endl;
        return 0;
    }
};
class Rectangle : public shape{
public:
    Rectangle(int a= 0, int b =0):shape(a,b){}
    int area(){
        cout << "Rectangle class area : " << endl;
        return(width*height);
    }
};
class Triangle : public shape{
public:
    Triangle(int a = 0, int b = 0):shape(a,b){}
    int area(){
        cout << "Triangle class area : " << endl;
        return (width*height/2);
    }
};

int main(){
    shape *Shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    Shape = &rec;

    Shape -> area();

    Shape = &tri;

    Shape -> area();

    return 0;

}
