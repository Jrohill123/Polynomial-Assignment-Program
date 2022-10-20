#include "equation.h"
using namespace std;

equation::equation() 
{
	begin = NULL;
	length = 0;

}

void equation::insertitem(nodetype x)
{
	nodetype* t;
	t = new nodetype;
	*t = x;
	t->next = NULL;
	if (begin == NULL)
	{
		begin = t;
		last = t;
	}
	else
	{
		last->next = t;
		last = t;

	}
	nodetype* y = begin;
	while (y != NULL)
	{
		if (y->exp < t->exp)
		{
			length = t->exp;
			t->exp = y->exp;
			y->exp = length;
			length = t->coeff;
			t->coeff = y->coeff;
			y->coeff = length;
		}
		y = y->next;
	}
}

void equation::printlist(ofstream& outputfile)
{
	nodetype* t = begin;
	while (t != NULL)
	{
		outputfile << t->coeff << "x" << t->exp;
		if (t->next != NULL)
		{
			if(t->next->coeff > 0)
				{
					outputfile << "+";
				}
		}
		t = t->next;
	}

}

void equation::add(equation e2, ofstream& outputfile)
{
	nodetype* t = begin;
	nodetype* p = e2.begin;
	while (t != NULL || p!= NULL)
	{
		if (t->exp == p->exp)
		{
			t->coeff = t->coeff + p->coeff;
			outputfile << t->coeff << "x" << t->exp;
			t = t->next;
			p = p->next;
			if (t != NULL && p != NULL)
			{
				if (t->coeff + p->coeff >= 0 && t->exp == p->exp)
				{
					outputfile << "+";
				}
				else if (t != NULL && p != NULL && t->exp > p->exp)
				{
					if (t->coeff >= 0)
						outputfile << "+";
				}
				else if (t != NULL && p != NULL && t->exp < p->exp)
				{
					if (p->coeff >= 0)
						outputfile << "+";
				}
			}
		}
		if (p == NULL && t!=NULL)
		{
			outputfile << t->coeff << "x" << t->exp;
			if (t->next != NULL)
			{
				if (t->next->coeff >= 0)
				{
					outputfile << "+";
				}
			}
			t = t->next;
		}
		if (t == NULL && p!=NULL)
		{
			outputfile << p->coeff << "x" << p->exp;
			if (p->next != NULL)
			{
				if (p->next->coeff >= 0)
				{
					outputfile << "+";
				}
			}
			p = p->next;
		}
		if (t != NULL && p != NULL && t->exp < p->exp)
		{
			outputfile << p->coeff << "x" << p->exp;
			p = p->next;
			if (p != NULL)
			{
				while (p->exp > t->exp)
				{
					outputfile << t->coeff << "x" << t->exp;
					p = p->next;
				}
				if (p->coeff + t->coeff >= 0 && p->exp == t->exp)
				{
					outputfile << "+";
				}
			}
		}
	 if (t != NULL && p != NULL && t->exp > p->exp)
		{
			outputfile << t->coeff << "x" << t->exp;
			t = t->next;
			if (t != NULL)
			{
				while (t->exp > p->exp)
				{
					outputfile << t->coeff << "x" << t->exp;
					t = t->next;
				}
				if (t->coeff + p->coeff >= 0 && t->exp == p->exp)
				{
					outputfile << "+";
				}
			}

		}
		
	}
}



