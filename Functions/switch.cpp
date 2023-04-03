#include<iostream>
using namespace std;
int main(){
	int age, b;
	
	cin>>age;
	
	switch (age){//if ng switch
		case 17:
			cout<<"young";
			cin>>b;
			
				switch (b){
					case 1:
						cout<<"GUMANA";
				}
			break;
		case 18:
			cout<<"old enough";
			break;
		case 65:
			cout<<"very old";
			break;
		default://else ng switch
			cout<<"tao kaba";
	}
}