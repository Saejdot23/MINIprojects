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
    if(option==1){
        user="rock";
    }
    else if(option==2){
        user="paper";
    }
    else{
        user="scissors";
    }
    int gen = (rand() % 3)+ 1;
    if(gen==1){
        gene="rock";
    }
    else if(gen==2){
        gene="paper";
    }
    else{
        gene="scissors";
    }
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