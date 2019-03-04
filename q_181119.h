#include<iostream>
#include<string>
using namespace std;

class student
{
	static int counter;
	int id;
	float*quizscore;
	int quizcapacity;
	int quiztaken;
	float gpa;
	
public:
	student();
	student(int,int);
	student(const student &);
	~student();
	void addquizscore(int);
	void setgpa(float);
	float getgpa() const;
	void print() const;
	bool compare(student);
	void updatescore(int,int);
};
