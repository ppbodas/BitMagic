#include <iostream>
#include <bitset>
#include <string>
#include <sstream>

using namespace std;

void printBits(int n)
{
	//print in binary format
	bitset<sizeof(n) * 8> bits(n);
	cout << bits << endl;
}

void printBitRepeatatively()
{
	string str;
	cout <<"Enter any number or return key to stop: ";
	while (std::getline(cin, str))
	{
		if (str.empty())
			break;
		istringstream strStream(str);

		int i;		
		strStream >> i;
		printBits(i);
		cout <<"Enter any number or return key to stop: ";
	}
}

void setbit(int n, int k)
{
	k = 0x1 << k;

	cout<< "Original Bits: ";
	printBits(n);

	cout<< "Changed  Bits: ";
	printBits(n | k);
}

void clearBit(int n, int k)
{
	k = 0x1 << k;

	cout<< "Original Bits: ";
	printBits(n);

	cout<< "Changed  Bits: ";
	printBits(n & ~k);
}

bool bitSetOrNot(int n, int k)
{
	k = 0x1 << k;

	return (k & n);
}

void toggleBit(int n, int k)
{
	bitSetOrNot(n,k)? clearBit(n,k): setbit(n,k);
}

int main()
{
	//printBitRepeatatively();
	//setbit(20,3);
	//clearBit(20,2);
	//bitSetOrNot(20, 2);
	toggleBit(20,2);
}