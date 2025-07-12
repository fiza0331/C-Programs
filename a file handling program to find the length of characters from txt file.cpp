//A file handling program to find the length from file
//This program is creatyed by syed saif ali shah
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int length;
	ifstream inFile("myfile.txt");
	inFile.seekg(10l , ios::cur);
	length = inFile.tellg(); 
	cout<<length;
}
