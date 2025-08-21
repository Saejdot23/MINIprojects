#include <iostream>
#include <algorithm>
#include <cstdlib>//for rand and srand 
#include <ctime>//for time()
using namespace std;

int main(){
    srand(time(0));//initializing the seed
    int gen = (rand()%100)+1;
    int cont; 
    cout<<"Press 1 to play game\n";
    cin>>cont;
    if(cont==1){
    do{ 
    cout<<"Enter your guess : ";
    int guess;
    cin>>guess;
    if(guess==gen){
        cout<<"BULLSEYE"<<endl;
    }
    else if(abs(guess-gen)>20){
        if(guess>gen){
            cout<<"TOO HIGH"<<endl;
        }
        else if(gen>guess){
            cout<<"TOO LOW"<<endl;
        }    
    }
    else{
        cout<<"Pretty darn close !\n";
    }
    cout<<"\nDo you want to guess again ?\n "<<"1-HELL YEAH\n 2-EXIT\n";
    cin>>cont;
}while(cont!=2);
    }
    else{
        return 0; 
    }
}

