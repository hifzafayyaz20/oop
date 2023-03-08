#include<iostream>
using namespace std;
class Student
{
	public:
	int sapid;
	int semester;
	string name;
	float gpa;
	bool isfemale;
	Student()
	{
		sapid=0;
		semester=0;
		name="H";
		gpa=0.0;
		bool isfemale=0;	
	}
	Student(int sapid,string name,int semester,float gpa,bool isfemale)
	{
		this->sapid=sapid;
		this->name=name;
		this->semester=semester;
		this->gpa=gpa;
		this->isfemale=isfemale;
	}
	Student(int sapid,string name)
	{
		this->sapid=sapid;
		this->name=name;
	}
	Student(int sapid,string name,float gpa)
	{
		this->sapid=sapid;
		this->name=name;
		this->gpa=gpa;
	}
	Student(int sapid,string name,bool isfemale){
		this->sapid=sapid;
		this->name=name;
		this->isfemale=isfemale;
	}
	~Student()
	{
		cout<<"Destructor of student is running"<<endl;
	}
};
int main()
{
    Student s1( 13,"Ali",2,3.9,0);
	Student s2( 11,"Hifza",2,3.1,1);
	Student s3( 7,"Saif",8,3.8,0);
	Student s4(25,"Alisha",2,3.2,1);
	
	cout<<" Student 1 : "<<endl<<"SAPID:"<<s1.sapid<<endl;
	cout<<"Student 1:"<<endl<<"NAME:"<<s1.name<<endl;
	cout<<" Student 1:"<<endl<<"Semester:"<<s1.semester<<endl;
	cout<<"Student 1:"<<endl<<"GPA:"<<s1.gpa<<endl;
cout<<" Student 1:"<<endl<<"GENDER:"<<s1.isfemale<<endl;
	cout<<" Student 2 :"<<endl<<"Sapid:"<<s2.sapid<<endl;
	cout<<"Student 2:"<<endl<<"NAME: "<<s2.name<<endl;
	cout<<" Student 3 : "<<endl<<"SAPID:"<<s3.sapid<<endl;
	cout<<" Student 3 : "<<endl<<"NAME: "<<s3.name<<endl;
	cout<<" Student 3 : "<<endl<<"GPA:"<<s3.gpa<<endl;
	cout<<" Student 4 : "<<endl<<"SAPID:"<<s4.sapid<<endl;
	cout<<" Student 4 : "<<endl<<"NAME: "<<s4.name<<endl;
	cout<<" Student 4 : "<<endl<<"GENDER:"<<s4.isfemale<<endl<<endl;
		return 0;	
}
