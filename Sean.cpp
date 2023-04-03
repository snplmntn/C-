#include<iostream>
#include<string>

void searchname();

using namespace std;

int main()
{
	string name;
	
	cout << "Enter Name: ";
	cin>>name;
	
   system ("title ItalyHorse45 Database Program");
   system ("cls");
   system ("color 0F");
}
   void searchname()
{
     ifstream employee("newemployee.txt");
     string name;
     string str, line;
     int age, offset;
     long int salary;
     system("CLS");
     cout << "Enter the emplyee's name:";
     cin >> str;
              
     while (employee >> name >> age >> salary){  
           if (str == name){
     system ("CLS");
     cout << "Employee found" << endl;
     cout << "Name" << ' ' << "Age" << ' ' << "Salary" << endl;
     cout << "---------------" << endl;     
     cout << name << ' '<< age << ' ' << "$" <<  salary << endl;
     }
     }
}