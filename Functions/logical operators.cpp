#include<iostream>
using namespace std;
int main(){
	int age;
	
	cin>>age;
	//== equal, > greater than < less than
	if (age==16 && age < 60){// && gamit para mapagsama conditions
		cout<<"AND OPERATOR"<<endl;
	}
	
	if (age==16 || age ==60){// || gamit para either of the condition
		cout<<"OR OPERATOR"<<endl;
	}
	
	if (!(age > 16)){// ! gamit para yung true gawing false like here condition was if age is greater than 16 pero since may ! edi yung condition naging if age is NOT greater than 16
		cout<<"LOGICAL NOT"<<endl;
	}
	
	return 0;
}