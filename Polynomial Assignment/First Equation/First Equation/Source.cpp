#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream firstequation;
	ofstream secondequation;
	ofstream thirdequation;
	ofstream fourthequation;
	ofstream fifthequation;
	ofstream sixthequation;
	int array1[8] = { 18,5,-7,3,6,2,6,0};
	int array2[12] = { 8,5,-7,4,6,3,9,2,-8,1,9,0 };
	int array3[8] = { 8,3,-7,5,6,2,6,0 };
	int array4[10] = { 8,5,-7,2,6,4,9,3,-8,0 };
	int array5[14] = { 8,3,-6,0,5,5,6,2,8,8,-7,7,6,1 };
	int array6[10] = { 9,5,-6,2,5,4,18,3,-9,0 };
	firstequation.open("Firstequation.txt");
	secondequation.open("secondequation.txt");
	thirdequation.open("thirdequation.txt");
	fourthequation.open("fourthequation.txt");
	fifthequation.open("fifthequation.txt");
	sixthequation.open("sixthequation.txt");
	for (int i = 0; i < 8; i++)
	{
		firstequation << array1[i] << endl;
	}

	for (int i = 0; i < 12; i++)
	{
		secondequation << array2[i] << endl;
	}

	for (int i = 0; i < 8; i++)
	{
		thirdequation << array3[i] << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		fourthequation << array4[i] << endl;
	}

	for (int i = 0; i < 14; i++)
	{
		fifthequation << array5[i] << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		sixthequation << array6[i] << endl;
	}













	
	
	return 0;
}