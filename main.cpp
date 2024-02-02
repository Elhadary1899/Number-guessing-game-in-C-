#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    bool again = true;
    char cont;

    while(again){

    int maxx,number,guessing;
    bool guess=false;
    maxx =100;
    srand(time(0));
    number = (rand()%maxx)+1;

    cout<<"Try guessing a number between 1 and 100."<<endl;
    cin>>guessing;
    if(guessing==number){
        cout<<"Congratulations, you've got it right!"<<endl;
        guess = true;
        cout<<"Do you want to play again? (type 'y' for yes and 'n' for no)."<<endl;
        cin>>cont;
        if(cont=='y'){
        continue;
        } else if(cont=='n'){
        again = false;
        } else{
        cout<<"Wrong input"<<endl;
        return 0;
    }
    }

    while(guess==false){
        if(guessing>number){
            cout<<"Try guess a smaller number."<<endl;
            cin>>guessing;
        } else if(guessing<number){
            cout<<"Try guessing a bigger number."<<endl;
            cin>>guessing;
        } else if(guessing==number){
            cout<<"Congratulations, you've got it right!"<<endl;
            guess = true;
        }
    }

    cout<<"Do you want to play again? (type 'y' for yes and 'n' for no)."<<endl;
    cin>>cont;
    if(cont=='y'){
        continue;
    } else if(cont=='n'){
        again = false;
    } else{
        cout<<"Wrong input"<<endl;
        return 0;
    }

    }

    return 0;
}
