//infix to postfix

#include<iostream>  
#include<stack>  
using namespace std;  

 
  
 
string convert(string);
int precedence(char);
bool eqlOrhigher(char,char);


bool IsOperator(char c)  
{  
	if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )
	{
		return true;
	}
	else
	{
		return false; 
	}  
} 

bool IsOperand(char c)  
{  
	if( c >= 'A' && c <= 'Z')
	{
	  	return true;  
	}
	if (c >= 'a' && c <= 'z')
	{
		return true;
	} 	  
	if(c >= '0' && c <= '9') 
	{
		return true;
	}
	else
	{
		return false;
	}  
}

bool eqlOrhigher (char op1, char op2)  
{  
	int p1 = precedence(op1);  
	int p2 = precedence(op2);  
	if (p1 == p2)  
	{  
		if (op1 == '^' )  
			return false;
		else  
			return true;  
	}
	else  
		return  (p1>p2 ? true : false);  
}

