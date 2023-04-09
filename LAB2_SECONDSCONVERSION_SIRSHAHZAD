/*Create a class duration in c++ that has 4 data members days ,hours ,minutes and seconds.
define a null constructor and 2 parametric constructors ,first constructor takes all the parameters
and assigns to the data members .second constructor takes duration in seconds calculates days hours and minutes from
that and sets the data members .also define 2 functions the first displays the duration in an understandable pattern
understandable pattern.the second function shows the total duration in seconds .
create different objects using the constructors and utilize the functions.*/

#include<iostream>
using namespace std;
class Duration{
	public:
		int days,hours,minutes,seconds;
		Duration(){
			days=0;
			hours=0;
			minutes=0;
			seconds=0;
		}
		Duration(int days,int hours,int minutes,int seconds){
			this->days=days;
			this->hours=hours;
			this->minutes=minutes;
			this->seconds=seconds;
		}
		Duration(int seconds){
			days=seconds/86400;
			seconds-=days*86400;
			hours=seconds/3600;
			seconds-=hours*60;
			minutes=seconds/60;
			seconds-=minutes*60;
			seconds=seconds%60;
			}
			void display(){
				cout<<days<<"days"<<hours<<"hours"<<minutes<<"minutes"<<seconds<<"seconds"<<endl;
			}
				
			int getinseconds(){
				return days*86400+hours*3600+minutes*60+seconds;
			}
};

int main(){

   Duration d1;
	Duration d2(2,4,8,5);
	Duration d3(3679);
	
	d1.display(); 
	cout<<"duration in seconds="<<d1.getinseconds()<<endl;
    d2.display();
	cout<<"duration in seconds="<<d2.getinseconds()<<endl;
    d3.display();
    cout<<"duration in seconds="<<d3.getinseconds()<<endl;
    return 0;
	}
