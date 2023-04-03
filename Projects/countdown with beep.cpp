#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    	
    do{
		cout<<n<<endl;
	if (n%5==0){
    cout << "Beep" <<endl;}
		n--;
	}
	while (n!=0);
	
	//countdown from user entered number and beeps if divisible by 5

    
    return 0;
}