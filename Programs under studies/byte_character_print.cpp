#include<iostream>
using namespace std;

struct message{
	
	void printThisMessage(){
		cout << "Helloo! Good Night!" <<"\n";
	}
	int sumAndPrint(int x, int y){
		int res = x + y;
		cout << res;
		return 0;
	}
	
}messageObjAccess;

int main()
{
	int mainX {60};
	int mainY {70};
	
	messageObjAccess.printThisMessage();
	messageObjAccess.sumAndPrint(mainX,mainY);
	
	return 0;
}