#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1 = "STMIK";
	string str2 = "PENUSA";
	
	// Concatenation
	string result = str1 + " " + str2;
	cout << "Concatenated: " << result << std::endl;
	
	// Length
	size_t length = result.length();
	cout << "Length: " << length << std::endl;
	
	// Substring
	string sub = result.substr(6, 6);
	cout << "Substring: " << sub << std::endl;
	
	// Find
	size_t pos = result.find("PENUSA");
	cout << "Position of 'PENUSA': " << pos << std::endl;
	
	// Replace
	result.replace(0, 5, "Hi");
	cout << "Replace: " << result << std::endl;
	
	return 0;
	
}