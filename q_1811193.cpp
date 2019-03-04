#include<iostream>
#include"Header.h";
#include<string>
using namespace std;

int main()
{
	student s1;
	s1.addquizscore(10);
	s1.addquizscore(3);
	s1.addquizscore(7);
	s1.addquizscore(1);
	s1.print();


	student s2(4,2);
	s2.addquizscore(9);
	s2.addquizscore(4);
	s2.addquizscore(6);
	s2.print();
	student s3(s2);
	s3.updatescore(1,3);
	s3.updatescore(10,3);
	cout<<s2.compare(s1)<<endl;
	s3.setgpa(3);
	s3.print();
	s1.print();
	system("pause");
	
}