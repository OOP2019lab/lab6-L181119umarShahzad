#include<iostream>
#include"Header.h"
#include<string>
using namespace std;

int main()
{
	student array[3]={(student(3,2.0),student(3,3.0),student(4,2.33))};

	array[0].addquizscore(1);
	array[0].addquizscore(4);
	array[0].addquizscore(10);

	array[1].addquizscore(10);
	array[1].addquizscore(4);
	array[1].addquizscore(9);

	array[2].addquizscore(9);
	array[2].addquizscore(8);
	array[2].addquizscore(7);

	student**array2=new student*[4];
	array2[0]=new student(3,2.0);
	array2[0]->addquizscore(1);
	array2[0]->addquizscore(4);
	array2[0]->addquizscore(10);

	array2[1]=new student(3,.0);
	array2[1]->addquizscore(10);
	array2[1]->addquizscore(4);
	array2[1]->addquizscore(9);

	array2[2]=new student(4,2.33);
	array2[2]->addquizscore(9);
	array2[2]->addquizscore(8);
	array2[2]->addquizscore(7);

	array2[3]=new student(4,1);
	array2[3]->addquizscore(2);
	array2[3]->addquizscore(3);
	array2[3]->addquizscore(0);
		
		
}