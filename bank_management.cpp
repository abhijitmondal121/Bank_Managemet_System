#include<iostream>
using namespace std;
class Bank{
	string name;
	string acname;
	string type;
	int ibalance;
	int dop;
	int wid;
	
	public:
		  void menu();
		  void get();
		  void deposite();
		  void check();
		  void withdraw();
		  void info();	
	
};
void Bank::menu(){
	int no;
	cout<<endl<<endl<<"choose your option form 1-to-6"<<endl;
	cout<<"1. create a new Acount:"<<endl;
	cout<<"2. Deposite your Money"<<endl;
	cout<<"3. Check your Balance:"<<endl;
	cout<<"4. Withdraw Amount:"<<endl;
	cout<<"5. Your Account's all info:"<<endl;
	cout<<"6. Exit"<<endl;
	cin>>no;
	switch(no){
		case 1:
			get();
			break;
		case 2:
	        deposite();
	        break;
		case 3:
			check();
			break;
		case 4:
			withdraw();
			break;
		case 5:
			info();
			break;  
		default:
			break;
			
	}
	
}

void Bank::get(){
	int go;
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"acount Name:"<<endl;
	cin>> acname;
	cout<<"Enter the type of Acount:"<<endl;
	cin>>type;
	cout<<"How much Money you want to Deposite?"<<endl;
	cin>>ibalance;
	cout<<"Your Account is Successfully Created:"<<endl;
	cout<<"Hit 0 for go to Main Menu:"<<endl;
	cin>>go;
	if(go==0){
		menu();
	}
	else
	return;
		
}


void Bank::deposite(){
	int go;
	 cout<<"How much Money you want to Deposite?"<<endl;
	 cin>>dop;
	 dop=dop+ibalance;
	 cout<<"Your current Balance:"<<dop<<endl;
 	 cout<<"Hit 0 for go to Main Menu:"<<endl;
 	 cin>>go;
	 if(go==0){
		menu();
	}
	else
	return;
		
}

void Bank::check(){
	int go;
	cout<<"Your current Balance:"<<dop<<endl;
	 cout<<"Hit 0 for go to Main Menu:"<<endl;
	  cin>>go;
		if(go==0){
		menu();
	}
	else
	return;
}
void Bank::withdraw(){
	int go;
	cout<<"How much money you want to Withdraw"<<endl;
	cin>>wid;
	dop=dop-wid;
	cout<<" After widthdrawing your current Balance:"<<dop<<endl;
	 cout<<"Hit 0 for go to Main Menu:"<<endl;
	  cin>>go;
	 if(go==0){
		menu();
	}
	else
	return;
		
}


void Bank::info(){
	int go;
	cout<<"Name of Depositer:"<<name<<endl;
	cout<<"Name of Acount:"<<acname<<endl;
	cout<<"Name of Type:"<<type<<endl;
	cout<<"Amount of your Account:"<<dop<<endl;
	 cout<<"Hit 0 for go to Main Menu:"<<endl;
	  cin>>go;
	 if(go==0){
		menu();
	}
	else
	return;
		
	
	
}
int main(){
	Bank obj;
	obj.menu();

	
}
