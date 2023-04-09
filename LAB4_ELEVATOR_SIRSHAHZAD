#include<iostream>
using namespace std;

class Elevator{
	public:
	float maxload;
	int id;
	int length;
	int currentfloor;
	bool isactive;

	Elevator(){
		maxload=0;
		id=0;
		length=0;
		currentfloor=0;
		isactive=0;
	}
	Elevator(float maxload,int id,int length){
		this->maxload=maxload;
		this->id=id;
		this->length=length;
	}
	Eleavator(int currentfloor,bool isactive){
		this->currentfloor=currentfloor;
		this->isactive=isactive;
	}

~Elevator(){
	cout<<"destructor is called:"<<endl;
}
void goup(){
	cout<<"elevator is goup:"<<endl;
	}
void godown(){
	cout<<"elevator is godown:"<<endl;
}	
void opengate(){
	cout<<"elevator gate is open:"<<endl;
}
void closegate(){
	cout<<"elevator gate is close:"<<endl;
}
void diplaycurrentlocation(){
	cout<<"elevator location is 2 floor";
}
};
int main(){
		system("cls");
 	int choice;
	Elevator h1;
	h1.maxload=8.9;
	h1.id=137;
	h1.length=12;
	h1.currentfloor=2;
	h1.isactive=false;
	
	cout<<"maxload:"<<h1.maxload;
	cout<<"\n id:"<<h1.id;
	cout<<"\n length:"<<h1.length;
	cout<<"\n currentfloor:"<<h1.currentfloor;
	cout<<"\n isactive:"<<h1.isactive;
	
	cin>>choice;
switch(choice)
 	{
 		case 1:
 			cout<<"maxload";
 			break;
 			case 2:
 				cout<<"\n id";
 					break;
 					case 3:
 						cout<<"\n length";
 						break;
 						case 4:
 							cout<<"\n currentfloor";
 							break;
 							case 5:
 							cout<<"\n isactive";
 								default:
 									cout<<"\n\n * INVALID CHOICE * ";
 	
    						
 }
   	 
 	}


