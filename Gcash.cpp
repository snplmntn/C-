#include<iostream>
#include<string>

using namespace std;
string name;
int balance;

int select(){
	long int cashin, cashout;
	int Transaction;
	cout<<endl<<"Select Transaction: "<<"Pay(1), Cash in(2), Cash out(3), Exit(4): ";
	cin>>Transaction;
	cout<<endl;
	
	int fee;
	
	switch(Transaction){
	case 1:{
	cout<<"Enter Fee:";
	cin>>fee;
	
	if (balance>fee){
	cout<<"Transaction Sucessful"<<endl<<"Your new balance is: "<<balance-fee<<endl;
	
	balance=balance-fee;
	
	return select();
	break;
	}
	
	if (balance<fee){
	cout<<"Transaction Unsucessful"<<endl<<"Insufficient Balance"<<endl<<"Balance is: "<<balance<<endl<<"You're short for: "<<fee-balance;
	return select();
	break;
	}
	

}
    case 2:{
    cout<<"Current balance is: "<<balance<<endl<<"Cash to be Added: ";
    cin>>cashin;
    cout<<endl<<"Your new balance is: "<<balance+cashin;
    
    balance=balance+cashin;
    return select();
    break;
    }
    
    case 3:{
    cout<<"Current balance is: "<<balance<<endl<<"Amount to be Cashout: ";
    cin>>cashout;
    cout<<"Your new balance is: "<<balance-cashout;
    balance=balance-cashout;
    return select();
    break;
    }
    
    case 4:{
    break;
    }
    default:{
    return select();
    }
}
}
int main(){
	
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Hi! "<<name<<endl<<"Enter Total Balance: ";
	cin>>balance;
	return select();
}