#include<iostream>
#include<fstream>


using namespace std;

//input output stream and their member functions.
// cin->istream.
// ignores leading white spaces with string, numeric and character types.
//Cin treats whitespace as delimiter for numeric and string data types. 
//For c style null terminated data type it adds the nullbyte at the end.

//istream member functions
// 
// 
//1) istream& ignore (streamsize n = 1, int delim = EOF);
// ignore till the streamsize or till the delim it will extract the delim and discard it.  


/*
2)A----->int get();istream& get (char& c);
single character
	Extracts a single character from the stream.
	The character is either returned (first signature), or set as the value of its argument (second signature).

	//char c;
	cout << "Enter a character : ";
	cin.get();

	cout << "You entered : " << c << endl;
	//

*/


/*
2)B----->istream& get (char* s, streamsize n);istream& get (char* s, streamsize n, char delim);
c-string
	Extracts characters from the stream and stores them in s as a c-string, until either (n-1) characters have been extracted or the delimiting character is encountered: the delimiting character being either the newline character ('\n') or delim (if this argument is specified).
	The delimiting character is not extracted from the input sequence if found, and remains there as the next character to be extracted from the stream (see getline for an alternative that does discard the delimiting character).
	A null character ('\0') is automatically appended to the written sequence if n is greater than zero, even if an empty string is extracted.
*/

int main()
{
	char str[256];
	cout << "enter the name of an existing text file: ";
	cin.get(str, 256);

	std::ifstream is(str);

	char c;
	while (is.get(c))
		cout << c;

	is.close();
	
	

	return 0;
}
