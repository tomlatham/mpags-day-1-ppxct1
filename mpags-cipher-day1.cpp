#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
std::string InputString{"test123."};
std::string OutputString;

// Convert the command-line arguments into a more easily usable form
const std::vector<std::string> cmdLineArgs {argv, argv+argc};

// Add a typedef that assigns another name for the given type for clarity
typedef std::vector<std::string>::size_type size_type;
const size_type nCmdLineArgs {cmdLineArgs.size()};

std::cout << "Input arguments were:" << "\n";

for (size_type i {0}; i<nCmdLineArgs; ++i)
{
std::cout << cmdLineArgs[i] << "\n";
}

for(char& c : InputString)
{

if (isalnum(c)!= 0)
{

	if (isdigit(c) != 0)
	{
	// convert numbers here
	switch(c)
	{
		case '0':
			OutputString += "ZERO";
			break;
		case '1':
			OutputString += "ONE";
			break;
		case '2':
			OutputString += "TWO";
			break;
		case '3':
			OutputString += "THREE";
			break;
		case '4':
			OutputString += "FOUR";
			break;
		case '5': 
			OutputString += "FIVE";
			break;
		case '6':
			OutputString += "SIX";
			break;
		case '7':
			OutputString += "SEVEN";
			break;
		case '8':
			OutputString += "EIGHT";
			break;
		default:
			OutputString += "NINE";
			break;
	}
}	
	else
	{
	//uppercase here
	OutputString += toupper(c);
	}



}
}
//prints final output
std::cout << "Output:"  << std::endl;
std::cout << OutputString  << std::endl;
}

