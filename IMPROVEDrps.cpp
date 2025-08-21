#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    srand(time(0));
    string user;
    string gene;
    //int len = user.lenght() to get the length of given string 
    int option;
    cout<<"What do you wanna show ?\n";
    cout<<"1-ROCK \n2-PAPER\n3-SCISSORS"<<endl;
    cin>>option;
    int gen = (rand() % 3)+ 1;
    // Create an array to hold the choices
    string choices[3] = {"rock", "paper", "scissors"};// string array

// Get user and computer choices using the array
// Note: We use option-1 and gen-1 because arrays are 0-indexed
    user = choices[option - 1];
    gene = choices[gen - 1]; 
    cout<<"\nYOU :"<<user<<"\t"<<"Computer :"<<gene<<endl;
    if(user==gene){
        cout<<"That would be a draw !\n";
    }
    else if(option==1 && gen==3 || option==2 && gen==1 || option==3 && gen==2){
        cout<<"Congratulations you've won!!!!\n";
    }
    else{
        cout<<"The computer got better off you hehe\n";
    }
    
}