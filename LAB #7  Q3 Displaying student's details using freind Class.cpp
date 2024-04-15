#include<iostream>
using namespace std;

class Student {
	private:
		string name;
		int ID;
		double GPA;
		
	public:
		//Default constructor definition
		Student (){
			name = "ABC";
			ID = 11;
			GPA = 1.1;
		}
	
	//Functions for setting student's data
	void setName(string name){
		this->name = name;
	}
	void settID(int ID){
		this->ID = ID;
	}
	void setGPA(double GPA){
		this->GPA = GPA;
	}
	
//friend class decleration
friend class Register;
};

//friend Register class definition
class Register{
	private:
		
	public:
		//printStudentRecord printing Student data.
		printStudentRecord(const Student& s){
			cout<<"\n\tName: "<<s.name;
			cout<<"\n\tID: "<<s.ID;
			cout<<"\n\tGPA: "<<s.GPA;	
		}
		
		
};


int main(){
		
		Student obj1;
		obj1.setGPA(3.1);
		obj1.setName("Hamid Gul");
		obj1.settID(1122);
	
		
		Register obj2;
		obj2.printStudentRecord(obj1);
		
	
	return 0;
}



/*

#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int ID;
    double GPA;

public:
    Student() {
        name = "ABC";
        ID = 11;
        GPA = 1.1;
    }

    void setName(string name) {
        this->name = name;
    }

    void setID(int ID) {
        this->ID = ID;
    }

    void setGPA(double GPA) {
        this->GPA = GPA;
    }

    // Declare Register as a friend class
    friend class Register;
};

class Register {
public:
    // Method to print student record
    void printStudentRecord(const Student& s) {
        // Access private members of Student
        cout << "Name: " << s.name << endl;
        cout << "ID: " << s.ID << endl;
        cout << "GPA: " << s.GPA << endl;
    }
};

int main() {
    Student obj1;
    obj1.setGPA(3.1);
    obj1.setName("Hamid Gul");

    Register obj2;
    obj2.printStudentRecord(obj1);

    return 0;
}

*/



