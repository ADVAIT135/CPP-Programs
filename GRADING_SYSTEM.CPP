#include<iostream>
using namespace std;
class student{
private:
    int regno;
    int marks[5];
    char name[20];
    char grade;
public:
    enterdetails();
    calculategrade(){
        int sum;
        for(int i;i<5;i++)
        {
            sum = sum + i;
        }
        if(sum > 400)

            grade = 'S';
        else if(sum > 300)
            grade = 'A';
        else if(sum > 200)
            grade = 'B';
        else if(sum > 100)
            grade = 'C';
        else
            grade = 'F';
        return grade;


}

    displayresult();
};
student :: enterdetails(){
    cout << "Enter the following details:-" << endl;
    cout << "n1. Registration number: ";
    cin >> regno;
    int i;
    cout << "n2. Marks in 5 subjects:- " << endl;
    for(i=0;i<5;i++)
    {
        cin >> marks[i];
    }
    cout << "n3. Name: ";
    cin >> name;
}
student :: displayresult(){
    cout << "\nThe details that you entered are:-" << endl;
    cout << "1. Registration number : " << regno << endl;
    cout << "2. Name : " << name << endl;
    cout << "3. Grade : " << grade << endl;
}

main()
{
    student s1;
    s1.enterdetails();
    s1.calculategrade();
    s1.displayresult();
}
