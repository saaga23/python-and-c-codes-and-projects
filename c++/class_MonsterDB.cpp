#include <iostream>
using namespace std;

class MonsterDB
{
	private:
		~MonsterDB() {}; // private destructor prevents instances on stack
		
	public:
		static void DestroyInstance(MonsterDB* pInstance)
		{
			delete pInstance; // memeber cna invoke private destructor 
			}	
		
		void DoSomehting() {
		} // sample empty member method
};

int main()
{
	MonsterDB* myDB = new MonsterDB(); // on heap
	myDB->DoSomething() ;
	
	// uncomment next line to see compile failure 
	// delete myDB; // private destructor cannot be invoked
	
	// use static member to release memory
	MonsterDB::DestroyInstance(myDB);
	
	return 0; 
}