#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	int key=3;
	char c; 
	string text;
	cout << "Enter the text for encryption: ";
	getline(cin,text);
  
  //-- Encryption -- //
  
	for(i=0; i<text.length(); i++){
	c=text[i];
		if(c>='A' && c<='Z')
		{
			text[i]=(c - 'A' + key) % 26 + 'A';
		}
		else if(c>='a' && c<='z')
		{
			text[i]=(c - 'a' + key) % 26 + 'a';
		}
	}
	cout << "Encrypted text: " << text <<"\n";
  
  // -- Decryption -- //
  
	for(i=0; i<text.length(); i++){
	    c=text[i];
	    if(c>='A' && c<='Z')
	    {
	        text[i]=(c-'A'-key + 26) % 26 + 'A';
	    }
	    else if(c>='a' && c<='z'){
	        text[i]=(c-'a'-key + 26) % 26 + 'a';
	    }
	}
	cout << "Decrypted Text: " << text << "\n";
	return 0;
}
