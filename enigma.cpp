/*

This is the  A.S.K. organization's first cooperative coding project 2/13/17
The purpose of this project will be to encrypt and decrypt messages sent between
two parties. Input will be recorded, checked, and encoded; ciphers will be created/deployed;
information read from and written to .txt files.

Proto_1 - in progress

-echo
-
-


*/
//Start with header files
#include<iostream>			//Allows us to get user input.
#include<fstream>			//Allows us to read/write to files.
#include<string>			//We may possibly need strings...  Haven't decided yet.
#include<cmath>				//In case we want to make complex ciphers based on math.
	
void  _instructions();		//This will include instructions for user. You guys can type this out in the actual function body at the bottom.
void _read();
void _write();

void _Encrypt();		//Just writing a prototype since we're going to need this eventually.

using namespace std;
int main() {



cout<<("Hello, Kevin!\n");
cout<<("That's right...\n");
cout<<("It's daddy-o... :)\n");

	




	system("pause");
	return(0);
}

void _instructions(){
	//Insert your instructional code here.  How is the user suposed to use this program?
		//Should this concept be menu driven? Give simple, clear, and concise instructions.



}

void _read(){

	string line;

	ifstream myfile("0.txt");

	cout << "File Read Initiated.\n\n" << endl;

	if (myfile.is_open())						//Perform the actions inside of this if block if the file is open
	{
		while (getline(myfile, line))				//Action in "if" block - while there is another line in "myfile"
		{	
			cout << line << '\n';						//Print it to the screen
		}

		myfile.close();								//After you reach the last line in the .txt file (a.k.a.  "myfile") - close file.
	}

	else cout << "Unable to open file.";			//If file doesn't exist or can't be opened, print to screen.

	return;
}

void  _write() {

	ofstream myfile;

	myfile.open("0.txt");

		myfile << "Writing this to a file.\n";

	myfile.close();
	
		cout << "File Write Completed." << endl;
	
	return;
}

void _Encrypt(){
}
