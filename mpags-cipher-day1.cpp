#include <iostream>
#include <string>

int main()
{
char in_char('x');
std::string InputString{"test"};
std::string OutputString;
char TempChar;


//while(std::cin >> in_char)
//{
	// Loop until the user presses enter then Ctrl+D
//	
//}
for(char& c : InputString)
{

std::cout << c  << "\n";

if (isalnum(c)== true)
{
	char temp{c};
	std::cout << temp  << "\n";

	if (isdigit(c) == true)
	{
	// convert numbers here
	switch(c)
	{
		case 0:
			OutputString = OutputString + ZERO;
			break;
		case 1:
			OutputString = OutputString + ONE;
			break;
		case 2:
			OutputString = OutputString + TWO;
			break;
		case 3:
			OutputString = OutputString + THREE;
			break;
		case 4:
			OutputString = OutputString + FOUR;
			break;
		case 5: 
			OutputString = OutputString + FIVE;
			break;
		case 6:
			OutputString = OutputString + SIX;
			break;
		case 7:
			OutputString = OutputString + SEVEN;
			break;
		case 8:
			OutputString = OutputString + EIGHT;
			break;
		default:
			OutputString = OutputString + NINE;
			break
	}
	}
	else
	{
	//uppercase here
	}




}
}
}
