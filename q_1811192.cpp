#include<iostream>
#include"Header.h"
#include<string>
using namespace std;

int student::counter=0;
student::student()
{
	id=counter;
	quizcapacity=3;
	quizscore=new float[quizcapacity];
	quiztaken=0;
	gpa=-1;
	counter++;
}
student::student(int x,int y)
{
	id=counter;
	quizcapacity=x;
	quizscore=new float[quizcapacity];
	quiztaken=0;
	gpa=y;
	counter++;
}
student::student(const student & x)
{
	id=x.id;
	quiztaken=x.quiztaken;
	gpa=x.gpa;
	quizcapacity=x.quizcapacity;
	quizscore=new float[quizcapacity];
	for(int i=0;i<quizcapacity;i++)
	{
		quizscore[i]=x.quizscore[i];
	}
	counter++;
}
student::~student()
{
	counter--;
	delete[]quizscore;
	quiztaken=0;
	quizcapacity=3;
	gpa=-1;
}
void student::addquizscore(int x)
{
	if(quiztaken==quizcapacity)
	{
		cout<<"error"<<endl;
	}
	else 
	{
		quizscore[quiztaken]=x;
		quiztaken++;
	}
}
void student::setgpa(float x)
{
	gpa=x;
}
float student::getgpa() const
{
	return gpa;
}
void student::print() const
{
	cout<<endl<<gpa<<endl<<id<<endl<<quiztaken<<endl;
	for(int i=0;i<quiztaken;i++)
	{
		cout<<quizscore[i]<<endl;
	}
}
bool student::compare(student s)
{
	if(s.gpa>gpa)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void student::updatescore(int x, int y)
{
	if(x>0&&x<quizcapacity)
	{
		quizscore[x]=y;
	}
	else
	{
		cout<<"error"<<endl;
	}
}