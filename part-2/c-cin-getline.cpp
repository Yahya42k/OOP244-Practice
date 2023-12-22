#include<iostream>
#include<fstream>



using namespace std;

//istream& getline (char* s, streamsize n );istream& getline (char* s, streamsize n, char delim );

/*
Extracts characters from the stream as unformatted input and stores them into s as a c-string, until either the extracted character is the delimiting character, or n characters have been written to s (including the terminating null character).

The delimiting character is the newline character ('\n') for the first form,
and delim for the second: when found in the input sequence, it is extracted
from the input sequence, but discarded and not written to s.
*/



int main()
{
	char name[256], title[256];

	cout << "Enter you name : ";
	cin.getline(name, 256);
	cout << "Enter Your Favourite movie title : ";
	cin.getline(title, 256);
	
	cout << "Your name is " << name << " Your favourite movie is  " << title << endl;
	

	return 0;
}
