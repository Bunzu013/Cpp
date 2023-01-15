#include <iostream>
#include <math.h>
using namespace std;
double sqrt_function(int a)
{
	if(a<0)
	throw -1; 
	else
	return sqrt(a);
}


class Error 
{
public:
	virtual void error()=0; 
	virtual~Error() {};
};

class SquareRootError: public Error
{
public:
	 void error()
	{
	 cout << "Pierwiastek z liczby ujemnej" << endl;
	 }
 };

double sqrt_function1(int a)
{
if(a<0)
throw SquareRootError(); 
else
return sqrt(a);
}
double sqrt_function2(int a)
{
 if(a<0)
 throw new SquareRootError(); 
 else
 return sqrt(a);
 }


void function_bad_alloc1()
{
	int* tab=new int [1000000000000];
}




int main()
{
	try 
	{
		double result=sqrt_function(-5);
		cout<<"Wynik to: "<<result<<endl;
	}
	catch(int w1) 
	{
		cout<<"Zlapany wyjatek int "<<w1<<endl;
	}
	catch(...) 
	{
		cout<<"Brak zdefiniowanego wyjatku"<<endl;
	}
	cout<<"Po sekcji try"<<endl;


	try
	{
		double result=sqrt_function1(-5);
		cout<<"Wynik to: "<<result<<endl;
	}
	catch(SquareRootError p) 
	{
	p.error();
	}
	try
	{
		double result=sqrt_function2(-5);
		cout<<"Wynik to: "<<result<<endl;
	}
	catch(Error *b) 
	{
		b->error();
		delete b; 
	}
	try
	{
		double result=sqrt_function1(-5);
		cout<<"Wynik to: "<<result<<endl;
	}
	catch(Error &b) 
	{
		b.error();
	}

	try
	{
		function_bad_alloc1();
	}
	catch(bad_alloc &ba) 
	{
		cout<<"function1 bad alloc: "<<ba.what()<<endl;
	}
	try
	{
		function_bad_alloc1();
	}
	catch(exception &e)
	{
		cout<<"function1 exception: "<<e.what()<<endl;
	}


return 0;
}