#include <iostream>
#include <string>
using namespace std;

class President
{
private:
	President () {}; // private default constructor
	President (const President&); // private copy constructor
	const President& operator=(const President&); // assignment operator
	
	string name;
	
public:
	static President& GetInstance()
	{
		// static objects are constructed only once
		static President onlyInstance;
		return onlyInstance;
	}
	
	string GetName()
	{
		return name;
	}
	void SetName(string InputName)
	{
		name = InputName;
	}
};

int main()
{
	President& onlyPresident = President::GetInstance();
	onlyPresident.SetName("Abraham Lincoln");
	
	// uncomment lines to see how compile failures prohibit duplicates
	// President second; // cannot access constructo
	// president* third = new President(); // cannot access constructor
	// President fourth = onlyPresient; // cannot acess copy constructor
	// onlypresident = president::GetInstance(); // cannot acess operators=
	
	cout << "THe name of the president is: ";
	cout << President :: GetInstance().GetName() << endl;
	
	return 0;
}