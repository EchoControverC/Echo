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

// Global ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int x = 0;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Functions ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _instructions();		//This will include instructions for user. You guys can type this out in the actual function body at the bottom.

void _read();
void _write();

void _opSelect( );

void _encrypt();		
void _decrypt();

void _encode();
void _decode();

void _flushbuffer();

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using namespace std;
int main() {

	_instructions();
	





	system("pause");
	return(0);
}
void  _opSelect() {


	switch (x) {

	case 1:

			_encrypt();

			break;

	case 2:

			_decrypt();

			break;

	case 3:

			_encode();

			break;

	case 4:

			_decode();

			break;

	default:

		cout << "Invalid entry. Returning to Main.\n" << endl;
		x = 0;

	}

	
}

void _instructions(){
	//Insert your instructional code here.  How is the user suposed to use this program?
		//Should this concept be menu driven? Give simple, clear, and concise instructions.

	cout << "Welcome to the enigma.\n"
		<< "Please select your operation with an integer:\n\n"
			<< "[ 1 ] - encrypt typed message, [ 2 ] - decrypt typed message,\n"
			<< "[ 3 ] - load encoded message from .txt file, [ 4 ] - submit encoded message to .txt file.\n" << endl;		//I've decided to go ahead and make this a menu driven system.
							
		cin >> x;

		_opSelect();

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



void _encrypt(){

	string message;
	int i = 0;

	_flushbuffer();

	cout << "Please type the message you would like to be encrypted on the next line and press [enter] when you're done.\n"
		<< ">  ";
	
	cin >> message;

	cout << "Message recorded:\n" << endl;
	cout << message;

	

}
void _decrypt() {

	string message;

	_flushbuffer();

	cout << "Please type the message you would like to be decrypted on the next line and press [enter] when you're done.\n" 
			<< ">  ";

	getline(cin, message);

		cout << "\nmessage accepted - encrypting\n" << endl;

		cout << "Your message was : " << message << endl;

}

void _encode(){

	cout << "Someday I'll be encoding stuff!\n" << endl;
/*
this is my encoding program from March 2003 ;)

It was meant to do a simple cryptographical substitution cipher when you clicked on the Dialog box button...

The idea was for Anthony and I to use these 2 executables to exchange encrypted emails.  Kevin was too young back then :).

so i think that you can simply remove 'm_Equation.' and call the function 'Replace' and you're golden.. daddy-o

void CEquations2Dlg::OnRemovespcBtn() 
{

	UpdateData();
	m_Equation.Replace("a",")");
	m_Equation.Replace("e","+");
	m_Equation.Replace("i","=");
	m_Equation.Replace("o","-");
	m_Equation.Replace("u","&");
	m_Equation.Replace("l","*");
	m_Equation.Replace("h","(");
	m_Equation.Replace("r","~");
	m_Equation.Replace("d","!");
	m_Equation.Replace("c","@");
	m_Equation.Replace("f","#");
	m_Equation.Replace("g","$");
	m_Equation.Replace("t","%");
	m_Equation.Replace("s","^");
	m_Equation.Replace("j","1");
	m_Equation.Replace("k","2");
	m_Equation.Replace("m","3");
	m_Equation.Replace("n","4");
	m_Equation.Replace("p","5");
	m_Equation.Replace("q","6");
	m_Equation.Replace("u","7");
	m_Equation.Replace("v","8");
	m_Equation.Replace("x","9");
	m_Equation.Replace("y","0");
	m_Equation.Replace("z","?");

	UpdateData(FALSE);
	
}

*/

}

void _decode(){

	cout << "Someday I'll be decoding stuff!\n" << endl;

/*
this is the corresponding decoding program from March 2003 ;)

Again, it implemented a simple cryptographical substitution cipher when you clicked on the Dialog box button...

The idea was for Anthony and I to use these 2 executables to exchange encrypted emails.  Kevin was too young back then :).

so i think that you can simply remove 'm_Equation.' and call the function 'Replace' and you're golden.. daddy-o

void CDecrypterDlg::OnDecryptBtn() 
{

	UpdateData();
	m_Decryption.Replace(")","a");
	m_Decryption.Replace("+","e");
	m_Decryption.Replace("=","i");
	m_Decryption.Replace("-","o");
	m_Decryption.Replace("&","u");
	m_Decryption.Replace("*","l");
	m_Decryption.Replace("(","h");
	m_Decryption.Replace("~","r");
	m_Decryption.Replace("!","d");
	m_Decryption.Replace("@","c");
	m_Decryption.Replace("#","f");
	m_Decryption.Replace("$","g");
	m_Decryption.Replace("%","t");
	m_Decryption.Replace("^","s");
	m_Decryption.Replace("1","j");
	m_Decryption.Replace("2","k");
	m_Decryption.Replace("3","m");
	m_Decryption.Replace("4","n");
	m_Decryption.Replace("5","p");
	m_Decryption.Replace("6","q");
	m_Decryption.Replace("7","u");
	m_Decryption.Replace("8","v");
	m_Decryption.Replace("9","x");
	m_Decryption.Replace("0","y");
	UpdateData(FALSE);
}

*/
	
}

void _flushbuffer() {

	cin.clear();
	cin.ignore(INT_MAX, '\n');

	cout << "Presto - Buffer Cleared\n" << endl;

}
