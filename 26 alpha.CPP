#include<iostream>
using namespace std;
main()
{

    char i;
    //for loop
    for(i='A';i<='Z';i++)
    {

        cout << i << "\t";
    }
    cout << "\n";
    //while loop
    i = 'A';
    while(i<='Z')
    {
        cout << i << "\t";
        i++;

    }
    cout << "\n";
    // do while loop
    i = 'A';
    do
    {
        cout << i << "\t";
        i++;


    }while(i<='Z')
    return 0;
}
