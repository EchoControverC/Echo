/*
Purpose:

This program will be a refresher on stream manipulators and input in part A while
Part B will aim to explain and create a triangle out of a user selected character.

*/


#include <iostream>
#include <iomanip>	// This header file is required in order to utilize the stream manipulators

using namespace std;

//void _k() {
//
//	for (int i = 0; i < 10; i++) {
//
//	std::cout << std::setfill('*') << std::setw(6);
//	std::cout << "kk" << std::endl;
//	
//	}
//
//	for (int j = 5; j > 1; j--) {
//	
//		std::cout << std::setfill('*') << std::setw(j);
//		std::cout << j << std::endl;
//
//	}
//
//
//	return;
//};
//void _e() {};
//void _v() {};
//void _i() {};
//void _n() {};

char _in;

void _triangle();
void _input();
void _Action();


int main (){

/************************************************************************/
//							Part A:										//
/************************************************************************/

	int x = 9876;
	int y = 6789;
	
	cout << "------------------Part A------------------\n\n" << endl;

	cout << "1234567890987654321\n" << endl;


	cout << setw(9) << y << setw(5) << x << setw(20) << " -Line 60" << endl;	
	cout << setw(5) << "345" << setw(9) << x << setw(20) << " -Line 61" << endl;
	cout << setw(7) << "567" << setw(11) << "5432" << setw(18) << " -Line 62\n\n" << endl;



/************************************************************************/
//							Part B:										//
/************************************************************************/

cout << "\n\n------------------Part B------------------\n\n" << endl;


	_Action();												//A friendly reminder that when debugging, you can right click on a function
															// <--- i.e. - [ _Action(); ] and select "Peek definition" for information about it!

	
	std::cout << "\nBooyah!\n" << endl;


	system("PAUSE");
	return 0;

}

void _input()
{
	cout << "Choose a single random character\n\n";
	cin.sync();

	cin.get(_in);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << endl;
}

void _triangle() {

	int i, space, rows, k = 0;

	cout << "Enter the number of rows (60's about as high as you want to go...) : ";


		cin >> rows;
			cout << endl;

	for (i = 1; i <= rows; ++i)
	{
		for (space = 1; space <= rows - i; ++space){

			cout << "  ";

			}while (k != 2 * i - 1){

				cout << _in << " ";
				++k;

			}

		k = 0;
		cout << "\n";
	}
}

void _Action() {

	//_input function is called in order to select the user defined character
	        _input();
	
	//_triangle function is called to create the user's triangle 
			_triangle();

}

