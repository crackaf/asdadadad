#pragma once
#include"Person.h"
#include"Registration_fwd.h"
//#include"Registration.h"
#include"Section_fwd.h"
#include<vector>
#include<string>
using std::string;
using std::vector;

namespace LMS {
	class Student :
		protected Person
	{
	protected:
		string rollno;
		vector<Registration*> sregistrations; //student registrations
	public:
		Student();
		Student(string rollno_, string name_, string dob_, string email_);
		Student(string rollno_, string name_, string dob_, string email_, vector<Registration*> reg_);
		~Student();
		
		bool addRegistration(Registration*  reg_);
		bool addRegistration(Section*  reg_);
	};
}
