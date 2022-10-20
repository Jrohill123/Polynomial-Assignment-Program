#include <iostream>
#include "equation.h"
#include <fstream>
using namespace std;



int main() {

	ifstream firstequation;
	ifstream secondequation;
	ifstream thirdequation;
	ifstream fourthequation;
	ifstream fifthequation;
	ifstream sixthequation;
	ofstream outputfile;
	equation one;
	equation two;
	equation three;
	equation four;
	equation five;
	equation six;
	nodetype n;
	outputfile.open("Polynomial Assignment");
	firstequation.open("firstequation.txt");
	secondequation.open("secondequation.txt");
	thirdequation.open("thirdequation.txt");
	fourthequation.open("fourthequation.txt");
	fifthequation.open("fifthequation.txt");
	sixthequation.open("sixthequation.txt");

	if (!firstequation.is_open())
	{
		cout << "The input file did not open " << endl;
		return 0;
	}
	if (!secondequation.is_open())
	{
		cout << "The input file did not open " << endl;
		return 0;
	}
	if (!thirdequation.is_open())
	{
		cout << "The input file did not open " << endl;
		return 0;
	}
	if (!fourthequation.is_open())
	{
		cout << "The input file did not open " << endl;
		return 0;
	}
	if (!fifthequation.is_open())
	{
		cout << "The input file did not open " << endl;
		return 0;
	}
	if (!sixthequation.is_open())
	{
		cout << "The input file did not open " << endl;
		return 0;
	}
		for (int i = 0; i < 4; i++)
		{
			firstequation >> n.coeff >> n.exp;
			one.insertitem(n);

		}
		one.printlist(outputfile);
		outputfile << endl;

		for (int i = 0; i < 6; i++)
		{
			secondequation >> n.coeff >> n.exp;
			two.insertitem(n);
		}
		two.printlist(outputfile);
		outputfile << endl;

		one.add(two,outputfile);
		outputfile << endl;

		for (int i = 0; i < 4; i++)
		{
			thirdequation >> n.coeff >> n.exp;
			three.insertitem(n);
		}
		three.printlist(outputfile);
		outputfile << endl;

		for (int i = 0; i < 5; i++)
		{
			fourthequation >> n.coeff >> n.exp;
			four.insertitem(n);
		}
		four.printlist(outputfile);
		outputfile << endl;

		three.add(four, outputfile);
		outputfile << endl;

		for (int i = 0; i < 7; i++)
		{
			fifthequation >> n.coeff >> n.exp;
			five.insertitem(n);
		}
		five.printlist(outputfile);
		outputfile << endl;

		for (int i = 0; i < 5; i++)
		{
			sixthequation >> n.coeff >> n.exp;
			six.insertitem(n);
		}
		six.printlist(outputfile);
		outputfile << endl;

		five.add(six, outputfile);

		cout << "The Program Is Done. Check Your Polynomial File" << endl;
	return 0;
}