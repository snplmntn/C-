#include<iostream>
using namespace std;

int main (){
	int a, b, c,d,e=3;
	string name1, name2;
	
	cout<<"******WELCOME!******"<<endl;
	cout<<"PLAYER 1 vs PLAYER 2"<<endl;
	cout<<"*******BEGIN!*******"<<endl<<endl;
	cout<<"ENTER PLAYER NAMES"<<endl;
	cout<<"PLAYER 1 NAME:";
	cin>>name1;
	cout<<"PLAYER 2 NAME:";
	cin>>name2;
	cout<<endl<<"Fight!";
	
	
	cout<<endl<< "Enter Game 1 winner(1/2):";
	cin>>a;
	
	switch (a) {
		case 1:
		cout<<"Enter Game 2 Winner:";
		cin>>b;
			switch (b) {
				case 1:
				cout<<name1<<" Won with 3 PTS";
				break;
				
				case 2:
				cout<<"Enter Game 3 Winner:";
				cin>>c;
				
					switch(c){
						case 1:
						cout<<name1<<" Won with 2 PTS";
						break;
						
						case 2:
						cout<<name2<<" Won with 2 PTS";
						break;
						
		default:
		cout<<endl<<"Invalid Input"<<endl<<"Restart Game? Yes(1) / No(2):";
		cin>>d;
		cout<<endl;
			switch (d){
				case 1:
				do{
				cout<<"Restarting Game..."<<endl<<endl;
				e-=1;	
				}
				while(e!=0);
				
				cout<<endl;
				return main();
				break;
				
				case 2:
					cout<<"Thanks for Playing!"<<endl<<endl;
					do{
					cout<<"Stopping Game..."<<endl<<endl;
					e-=1;	
					}
					while(e!=0);
					break;
					
			default:
			e+=2;
			cout<<"Invalid Input"<<endl;
			do{
			cout<<"Stopping Game..."<<endl<<endl;
			e-=1;	
			}
			while(e!=0);
			break;				
	}
					}
				break;
					
		default:
		cout<<endl<<"Invalid Input"<<endl<<"Restart Game? Yes(1) / No(2):";
		cin>>d;
		cout<<endl;
			switch (d){
				case 1:
				do{
				cout<<"Restarting Game..."<<endl<<endl;
				e-=1;	
				}
				while(e!=0);
				
				cout<<endl;
				return main();
				break;
				
				case 2:
					cout<<"Thanks for Playing!"<<endl<<endl;
					do{
					cout<<"Stopping Game..."<<endl<<endl;
					e-=1;	
					}
					while(e!=0);
					break;
					
			default:
			e+=2;
			cout<<"Invalid Input"<<endl;
			do{
			cout<<"Stopping Game..."<<endl<<endl;
			e-=1;	
			}
			while(e!=0);
			break;				
	}
			}
		break;
		
		case 2:
		cout<<"Enter Game 2 Winner:";
		cin>>b;
			switch (b){
				case 2:
				cout<<name2<<" Won with 3 PTS";
				break;
				
				case 1:
				cout<<"Enter Game 3 Winner:";
				cin>>c;
				
					switch(c){
						case 1:
						cout<<name1<<" Won with 2 PTS";
						break;
						
						case 2:
						cout<<name2<<" Won with 2 PTS";
						break;
						
		break;
		default:
		cout<<endl<<"Invalid Input"<<endl<<"Restart Game? Yes(1) / No(2):";
		cin>>d;
		cout<<endl;
			switch (d){
				case 1:
				do{
				cout<<"Restarting Game..."<<endl<<endl;
				e-=1;	
				}
				while(e!=0);
				
				cout<<endl;
				return main();
				break;
				
				case 2:
					cout<<"Thanks for Playing!"<<endl<<endl;
					do{
					cout<<"Stopping Game..."<<endl<<endl;
					e-=1;	
					}
					while(e!=0);
					break;
					
			default:
			e+=2;
			cout<<"Invalid Input"<<endl;
			do{
			cout<<"Stopping Game..."<<endl<<endl;
			e-=1;	
			}
			while(e!=0);
			break;				
	}
					}
		break;
		default:
		cout<<endl<<"Invalid Input"<<endl<<"Restart Game? Yes(1) / No(2):";
		cin>>d;
		cout<<endl;
			switch (d){
				case 1:
				do{
				cout<<"Restarting Game..."<<endl<<endl;
				e-=1;	
				}
				while(e!=0);
				
				cout<<endl;
				return main();
				break;
				
				case 2:
					cout<<"Thanks for Playing!"<<endl<<endl;
					do{
					cout<<"Stopping Game..."<<endl<<endl;
					e-=1;	
					}
					while(e!=0);
					break;
					
			default:
			e+=2;
			cout<<"Invalid Input"<<endl;
			do{
			cout<<"Stopping Game..."<<endl<<endl;
			e-=1;	
			}
			while(e!=0);
			break;				
	}

			}
		break;
		default:
		cout<<endl<<"Invalid Input"<<endl<<"Restart Game? Yes(1) / No(2):";
		cin>>d;
		cout<<endl;
			switch (d){
				case 1:
				do{
				cout<<"Restarting Game..."<<endl<<endl;
				e-=1;	
				}
				while(e!=0);
				
				cout<<endl;
				return main();
				break;
				
				case 2:
					cout<<"Thanks for Playing!"<<endl<<endl;
					do{
					cout<<"Stopping Game..."<<endl<<endl;
					e-=1;	
					}
					while(e!=0);
					break;
					
			default:
			e+=2;
			cout<<"Invalid Input"<<endl;
			do{
			cout<<"Stopping Game..."<<endl<<endl;
			e-=1;	
			}
			while(e!=0);
			break;				
	}
	}

}


