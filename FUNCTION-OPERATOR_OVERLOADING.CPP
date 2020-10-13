#include<iostream>
using namespace std;
class Data{
public :
    void print(int i){
        cout << "Printing int : " << i << endl;
    }
    void print(double f){
        cout << "Printing float : " << f << endl;
   }
   void print(char* c){
       cout << "Printing character : " << c << endl;
   }
};
int main()
{
    Data pd;
    pd.print(5);
    pd.print(589.6732);
    pd.print("Hello C++!!");
    return 0;
}
