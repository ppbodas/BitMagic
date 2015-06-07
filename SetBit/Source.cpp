#include <iostream>
#include <bitset>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int i;
	string str;
	cout <<"Enter any number or return key to stop: ";
	while (std::getline(cin, str))
	{
		if (str.empty())
			break;
		istringstream strStream(str);
		
		strStream >> i;
		//print in binary format
		bitset<sizeof(i) * 8> bits(i);
		cout << bits << endl;
		cout <<"Enter any number or return key to stop: ";
	}
}