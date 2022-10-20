#include <iostream>
#include <fstream>
using namespace std;



struct nodetype
{
	int coeff;
	int exp;
	nodetype* next;
};

class equation
{
private:
	nodetype* begin;
	nodetype* last;
	int length;

public:
	equation();
	void insertitem(nodetype);
	void printlist(ofstream&);
	void add(equation e2,ofstream&);
};