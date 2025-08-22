//This project was made by me and yajat
//doing this i learnt about bool int type
//creating algo
//using system("pause");
//checking if win condition and draw condition dont exist together
#include <iostream>
using namespace std;
int j=0;
bool flag=true;
void display(char a[][3],int row,int col) {
	cout<<endl;
	for(int i=0; i<row; i++) {
		cout<<"|\t";
		for(int j=0; j<col; j++) {
			cout<<a[i][j]<<"\t";
		}
		cout<<"|";
		cout<<endl;
	}

}
int main() {

	char tictactoe[3][3]= {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
	int row,col;
	bool player;
	display(tictactoe,3,3);
	int count=0;
	do {
		cout<<endl;
		bool flagin1=false;
		do {
			flagin1=false;
			cout<<"Player 1 place X\nRow:";
			cin>>row;
			cout<<"Column:";
			cin>>col;
			if(tictactoe[row-1][col-1]=='-') {
				tictactoe[row-1][col-1]='X';
			}
			else {
				cout<<"Try again\n";
				flagin1=true;
			}
		} while(flagin1);
		count++;

		display(tictactoe,3,3);

		for(int i=0; i<3; i++) {
			if(tictactoe[i][j]==tictactoe[i][j+1] && tictactoe[i][j]==tictactoe[i][j+2]) {
				if(tictactoe[i][j]=='X') {
					player=true;
					flag=false;
					count--;
				}
				else if(tictactoe[i][j]=='O') {
					player=false;
					flag=false;
					count--;
				}
			}
			else if(tictactoe[j][i]==tictactoe[j+1][i] && tictactoe[j][i]==tictactoe[j+2][i]) {
				if(tictactoe[j][i]=='X') {
					player=true;
					flag=false;
					count--;
				}
				else if(tictactoe[j][i]=='O') {
					player=false;
					flag=false;
					count--;
				}
			}
		}
    
		if(tictactoe[0][0]==tictactoe[1][1] && tictactoe[0][0]==tictactoe[2][2]) {
			if(tictactoe[0][0]=='X') {
				player=true;
				flag=false;
				count--;
			}
			else if(tictactoe[0][0]=='O') {
				player=false;
				flag=false;
				count--;
			}
		}
		else if(tictactoe[1][3]==tictactoe[2][2] && tictactoe[1][3]==tictactoe[3][1]) {
			if(tictactoe[1][3]=='X') {
				player=true;
				flag=false;
				count--;
			}
			else if(tictactoe[1][3]=='O') {
				player=false;
				flag=false;
				count--;
			}
		}
        if(count==9){
			break;
		}
		if(!flag) {
			break;
		}
		bool flagin2=false;
		do {
			flagin2=false;
			cout<<"Player 2 place O\nRow:";
			cin>>row;
			cout<<"Column:";
			cin>>col;
			if(tictactoe[row-1][col-1]=='-') {
				tictactoe[row-1][col-1]='O';
			}
			else {
				cout<<"Try again\n";
				flagin2=true;
			}
		} while(flagin2);
		count++;
		display(tictactoe,3,3);
		for(int i=0; i<3; i++) {
			if(tictactoe[i][j]==tictactoe[i][j+1] && tictactoe[i][j]==tictactoe[i][j+2]) {
				if(tictactoe[i][j]=='X') {
					player=true;
					flag=false;
					count--;
				}
				else if(tictactoe[i][j]=='O') {
					player=false;
					flag=false;
					count--;
				}
			}
			else if(tictactoe[j][i]==tictactoe[j+1][i] && tictactoe[j][i]==tictactoe[j+2][i]) {
				if(tictactoe[j][i]=='X') {
					player=true;
					flag=false;
					count--;
				}
				else if(tictactoe[j][i]=='O') {
					player=false;
					flag=false;
					count--;
				}
			}
		}
		if(tictactoe[0][0]==tictactoe[1][1] && tictactoe[0][0]==tictactoe[2][2]) {
			if(tictactoe[0][0]=='X') {
				player=true;
				flag=false;
				count--;
			}
			else if(tictactoe[0][0]=='O') {
				player=false;
				flag=false;
				count--;
			}
		}
		else if(tictactoe[1][3]==tictactoe[2][2] && tictactoe[1][3]==tictactoe[3][1]) {
			if(tictactoe[1][3]=='X') {
				player=true;
				flag=false;
				count--;
			}
			else if(tictactoe[1][3]=='O') {
				player=false;
				flag=false;
				count--;
			}
		}
		if(!flag) {
			break;
		}
		
	} while(true);
	if(count>8) {
		display(tictactoe,3,3);
		cout<<"The game ended in a draw!\n";
        system("pause");
		return 0;
	}
	else {
		if(player) {
			display(tictactoe,3,3);
			cout<<"Player 1 has won !!!\n";
            system("pause");
		}
		else {
			display(tictactoe,3,3);
			cout<<"Player 2 has won !!!\n";
            system("pause");
		}
	}

}
