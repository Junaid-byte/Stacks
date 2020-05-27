#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stack>
#define MAX 5

int a[MAX], top = -1; //Creating A Stack

void push();
void pop();
void display();
void update();

using namespace std;

int main()
{
	cout << "1)Push/Insert " << endl<<endl;
	cout << "2)Pop/Remove " << endl<<endl;
	cout << "3)Display Stack " << endl<<endl;
	cout << "4)Update " << endl<<endl;
	cout << "5)Exit " << endl << endl;

	while (1)
	{
		int ch;
		cout << endl << "Enter Choice:- ";
		cin >> ch;
		switch (ch)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				update();
				break;
			}
			case 5:
			{
				exit(0);
			}
			default:
			{
				cout << "You Entered The Wrong Choice!" << endl;
			}
		}

	}
	_getch();
	return 0;
}


void push()
{
	int data;
	if (top == MAX - 1)
	{
		cout << "Stack Overflow Or Stack is Full!" << endl;
	}
	else
	{
		cout << endl;
		cout << "Enter Element To Push/Insert:- ";
		cin >> data;
		top++;
		a[top] = data;
	}

}
void pop()
{
	if (top == -1)
	{
		cout << "Underflow Or Stack is Empty!" << endl;
	}
	else
	{
		cout << endl;
		cout << "Popped/Removed Element is:- " << a[top]<<endl;
		top--;
	}
		
}
void display()
{
	if (top >= 0)
	{
		cout << "\n" << "Stack Values:- " << endl;
		for (int i = top; i >= 0; i--)
		{
			cout <<"a[" << i <<"]"<< " = " << a[i] << endl;
		}
		 
	}
	else
	{
		cout << "Stack Is Empty!" << endl;
	}
}
void update()
{
	if (top!= -1)
	{
		int pos;
		cout << "Enter Position:- ";
		cin >> pos;
		if (pos <= top && pos > -1)
		{
			cout << "Enter Value To Update In Stack:- ";
			cin >> a[pos];
			cout << "Updated Stack Values:- " << endl;
			display();
			
		}
		else
		{
			cout << "Invalid Position Of The Stack!" << endl;
		}
	}
	else
	{
		cout << "Invalid Data/Value Of The Stack!" << endl;
	}
}

/*
Follow me on my github ID https://github.com/Junaid-byte
Credits:-Junaid Jawed
*/
