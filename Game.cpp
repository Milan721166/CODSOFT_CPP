/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number. */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{   int user;
    srand(time(0));
    int random=rand();
    int randomnumber=random%10;
    while(1)
    {
        cout<<"\nGuess the number between (0-9)";
        cin>>user;
        if(user>randomnumber){
            cout<<"\nGuess the number smaller Number "; 
        }
        else if (user<randomnumber)
        {
           cout<<"\nGuess the number biggger Number ";
        }
        else{
            cout<<"\nCongratulations! You guessed the correct number: " << randomnumber << "!";
            break;
        }
        
    }
    return 0;
}