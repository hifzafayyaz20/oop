#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*
struct Std{
	
	private:
		int *sapID;

    public:
    	string name;
    	int semester;
    	float cgpa;
    	
    	int getSapID()
    	{
    		return sapID;
		}
    	
		
};

*/


/*
class CStudent: public Student{
	
	public:
	int sid;
	
	CStudent(){
		*sapID = 10;
	}
};
*/

class Student {

public:
    int *sapID;
    string name;
    int semester;
    float cgpa;
    

public: 
	Student(){
		this->sapID = new int();
		cout<<"Null constructor is called\n";
		*this->sapID = -1;
		this->name = "";
		this->cgpa = 0.0f;
		this->semester = 0;
	}
	
	Student(int sapID, string name){
		Student();
		*this->sapID = sapID;
		this->name = name;
	}

	Student(int sapID, string name, int semester){
		Student();
		*this->sapID = sapID;
		this->name = name;
		this->semester = semester;
	}	

	Student(int sapID, float cgpa, string name, int semester){
		this->sapID = new int();
		cout<<"Parametric constructor is called\n";
		*this->sapID = sapID;
		this->name = name;
		this->cgpa = cgpa;
		this->semester = semester;
	}	
		
	Student(int sapID, string name){
		Student();
		*this->sapID = sapID;
		this->name = name;
	}
	
	Student(Student &std){
		cout<<"Copy Constructor is called\n";
		this->sapID = std.sapID;
		this->name = std.name;
		this->cgpa = std.cgpa;
		this->semester = std.semester;
	}
	
	
	int getSapID(){
		return *sapID;
	}
	string getname(){
		return name;
	}
	int getsemester(){
		return semester;
	}
	float getcgpa(){
		return cgpa;
	}
	
	
	
	void setSapId(int sapID){
		*this->sapID = sapID;
	}
		void setname(string name){
		this->name = name;
	}
		void setsemester(int semester){
		this->semester = semester;
	}
		void setcgpa(float cgpa){
		this->cgpa = cgpa;
	}
	~Student(){
		cout<<"Destructor is called\n";
		delete this->sapID;
	}
	
	void display(){
		cout<<"Sap ID: \t" <<*sapID;
		cout<<"\nName: \t\t" <<name;
		cout<<"\nCGPA: \t\t" <<cgpa;
		cout<<"\nSemester: \t" <<semester;
	}
};
int main(){
	Student std1;
	
	fstream Student_Data;
    Student_Data.open("Student_Data.txt",ios::out);
    Student_Data<<std1.name<<"\t";
    Student_Data<<std1.sapID<<"\t";
    Student_Data<<std1.semester<<"\t";
    Student_Data<<std1.cgpa<<"\t";
    Student_Data.close();
    
    	cout<<"Data of the user : \n";
		cout<<"DETAILS OF THE STUDENTS ARE:"<<endl;
	fstream studentdetails;
	studentdetails.open("studentdetails.txt", ios::in );
    string line;
    while (getline(studentdetails, line)) {
    	cout<<"----------------\n";
    cout <<line<<endl; 
}
    studentdetails.close();
    
	std1.setSapId(54731);
	cout<< std1.getSapID()<<endl;
	std1.setname("alisha");
	cout<< std1.getname()<<endl;
	std1.setsemester(5);
	cout<< std1.getsemester()<<endl;
	std1.setcgpa(5.3);
	cout<< std1.getcgpa()<<endl;
	//std1.display();

	return 0;
}



