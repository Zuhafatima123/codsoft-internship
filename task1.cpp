
//number guessing game with numbers range between 1 and 100
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int secretnum = rand()%100+1;
    int guessednum = 0;

    cout<<"GUESS THE NUMBER BETWEEN 1 AND 100: "<<endl;

    while(guessednum != secretnum)
    {
        cin>>guessednum;

        if(guessednum>secretnum){
            cout<<"Too high! Guess again: "<<endl;
        }
        else if(guessednum<secretnum){
            cout<<"Too low! Guess again: "<<endl;
        }
        else{
            cout<<"Brilliant! You have guessed the number correctly"<<endl;
            cout<<"The secret number was "<<secretnum<<endl;
        }
    }
    return(0);
}

