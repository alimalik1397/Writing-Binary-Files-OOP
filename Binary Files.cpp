/*Ali Shehzad Malik
Write code for copying a binary file into another binary file. 
Open the two files in binary mode, one for reading and the other for writing.*/

#include <iostream>
#include <fstream>
#include<string>

using namespace std;
class Student
{protected:
	string  name;								//Name of student
	int registrationNumber;				//Registration number
public:
	void getinfo()								//Getter function
	{
		cout << "Enter the name of the student " << endl;
		cin >> name;
		cout << "Enter the registration number of the student " << endl;
		cin >> registrationNumber;
	}

	void writingToFile()
	{
		ofstream o1;
		ifstream i1;
		o1.open("Student.txt", ios::out);
		o1 << name;			//Outputting name to file
		o1 << endl;
		o1 << registrationNumber;
		try{
			if (!o1.is_open())
			{
				throw (5);
			}
			
		}
		catch (int)
		{
			cout << "No file is open " << endl;
		}
		i1 >> name;
		i1 >> registrationNumber;			//Inputting from file
		cout << name<<endl;
		cout << registrationNumber<<endl;			//Outputting to the console window
		o1.close();
	}
	
};
int main()
{
	Student s1;
	s1.getinfo();						//Getting user info
	s1.writingToFile();				//Writing to a file
	return 0;							//Program terminates successfully
}