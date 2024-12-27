/*SIMPLE CALCULATOR
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/



#include<iostream>
using namespace std;
void add(int f,int s)
{
    int c=f+s;
    cout<<"\nThe result of Addition: "<<c<<endl;
}
void sub(int f,int s)
{
    int c=f-s;
    cout<<"\nThe result of Subtraction: "<<c<<endl;
}
void multi(int f,int s)
{
    int c=f*s;
    cout<<"\nThe result of Multiplication: "<<c<<endl;
}
void divi(int f,int s)
{
    if (s == 0) {
        cout << "\nError: Division by zero is not allowed!" << endl;
    } else {
        int c = f / s;
        cout << "\nThe result of Division: " << c << endl;
    }
}
int main()
{   int first_element,second_element,input;
    cout<<"\nEnter the first element ";
    cin>>first_element;
    cout<<"\nEnter the second element ";
    cin>>second_element;
    while (1)
    {
        cout<<"\nPlease enter your choose\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit";
        cin>>input;
        switch (input)
        {
        case 1:
            add(first_element,second_element);
            break;
        case 2:
            sub(first_element,second_element);
            break;
        case 3:
            multi(first_element,second_element);
            break;
        case 4:
            divi(first_element,second_element);
            break;
        case 5:
            cout << "Exiting the program. Thank You" << endl;
            exit(0);
        default:
        cout<<"\nInvalid input";
            break;
        }
    }
    return 0;
}
