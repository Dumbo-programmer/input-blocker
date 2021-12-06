#include<windows.h>
#include<winable.h>
#include<iostream>
using namespace std;

int main()
{
	cout<<"keyboard go brrrr"<<endl;
	Sleep(2000);
while (true){
	BlockInput(true);
	//Sleep(90000);
}
}