#include<iostream>

using namespace std;
int main();
int names();
int games = 1;
int gamess = 0;
int main(){
	switch(gamess){
		case 0:
		break;
		
		default:
		cout<<endl<<endl;
	}

	cout<<"******WELCOME!******"<<endl;
	cout<<"PLAYER 1 vs PLAYER 2"<<endl;
	cout<<"*******BEGIN!*******"<<endl<<endl;
	return names();
}

int body(string name1, string name2){
	int rst, rnd, rnds,min = 2, p1 = 0, p2 = 0,game;
	
	cout<<endl<<"Game "<<games<<endl;
	for(int rnds = 1; rnds <= 3; rnds++){
	cout<< "Enter round "<<rnds<<" winner (1/2):";
	cin>>rnd;
	
	switch (rnd) {
		case 1:{
		p1++;
		break;
		}
		
		case 2:{
		p2++;
		break;
		}
		
		default:{
		cout<<"Invalid Input!"<<endl;
		rnds--;
		break;
		}
}
	if(p1==2 || p2==2){
		break;
	}
}
/*
	switch(p1){
		case 2:
			switch(p2){
			case 0:
			p1++;
			break;
		}
		break;
}
	switch(p2){
		case 2:
			if(p1==0){
			p2++;
			}
		break;
		}
*/
	
		if(p1>p2){
			cout<<endl<<name1<<" WINS!"<<endl;
			cout<<name1<<" won with "<<p1<<" PTS"<<endl;
			cout<<name2<<" Earned "<<p2<<" PT"<<endl;
			rst+1;
		}
	
		else{
			cout<<endl<<name2<<" WINS!"<<endl;
			cout<<name2<<" won with 2 PTS"<<endl;
			cout<<name1<<" Earned "<<p1<<" PT"<<endl;
			rst+1;		
	}

	
	while(rst=1){
		int exit = 0;
		cout<<endl<<"Next Game(1) Restart Game(2) Exit(3): ";
		cin>>game;
	
		switch(game){
		case 1:
			games++;
			cout<<endl<<"FIGHT!"<<endl;
			return body(name1, name2);
			break;
		case 2:
			while(exit!=3){
				cout<<endl<<"Restarting Game...";
				exit++;
			}
			gamess++;
			return main();
			break;
		case 3:
			while(exit!=3){
				cout<<endl<<"Stopping Game...";
				exit++;
			}
			rst++;
			break;
		
		default:
		cout<<"Invalid Input";
		rst--;
		break;
		}
		break;
	}

	return 0;
}

int names(){
	string name1, name2;
	cout<<endl<<"ENTER PLAYER NAMES"<<endl;
	cout<<"PLAYER 1 NAME:";
	cin>>name1;
	cout<<"PLAYER 2 NAME:";
	cin>>name2;
	cout<<endl;
	
	if(name1==name2){
		cout<<"Names must be different with each other.";
		return names();
	}
	else{
	cout<<"Fight!"<<endl;
	return body(name1, name2);
}
}

