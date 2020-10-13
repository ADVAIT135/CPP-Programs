#include<iostream>
#include<string>
using namespace std;
class Myclass{
public:
    int num;
    string String;
};
int main(){
    Myclass myobj;
    myobj.num = 15;
    myobj.String = "Hi There!!!";
    cout << myobj.num << endl;
    cout << myobj.String << endl;
    return 0;
}
