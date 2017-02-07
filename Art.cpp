/*
This project will be a fun sort of randomizer for an artist or otherwise visually skilled
user to decide on what they should use as their subjects. This will be accomplished via a 
simple array filled with information which will be randomly selected and displayed.

Echo - 11/15/16

*/


#include<iostream>
#include<string>
#include <iomanip>
#include<cmath>

using namespace std;

void _subject();
void _greeting();

int main() {


	_greeting();
	_subject();

	cout << endl;

	system("pause");
	return(0);
}

void _greeting() {

	cout << "-------------------------------------------------" << endl;
	cout << setw (35) << "Welcome to the Subject Selector!\n"
		<<"---------------------------------------------------"
		<< "\nHere we will be using arrays and stored\n"
		<< "data in order to make a selction about\n"
		<< "what you should paint or otherwise create!\n\n" << endl;

}

void _subject()
{

	

	int count = 0;
	string subj[] = { "An Abode" , "A Bottle" , "A Clock" , "A Duck" , "The Earth" , "Some Flowers" , "A Girl" , "A Human",
						"An Illuminant", "A Jabot" , "Kinesis" };

	cout << "Please enter how many subjects you'd prefer in your painting: ";
	cin >> count;

	if (count != 0) {
		cout << "\nYour creativity machine thinks you should include:\n\n";

		for (int i = 0; i < count; i++) {
			
			int x = rand() % 10;

			cout << "- " << subj[x] << endl;

				if (i == (count - 2)) {
					cout << "and\n";
				}

				x = 0;
		}

	}
	else {

		cout << "Sorry! You selected 0 suggestions; you don't need a machine telling you what to do anyway- you got this!\n\n" << endl;

		}

	}


