
#include <iostream>
using namespace std;
int main()
{
//declaring array
	char me[5]={'A','k','y','a','\0'};
	
	
//using index method
cout<<"myself"<<endl;
	for(int n=0;n<5;n++)
		cout <<me[n];
//using pointers method
cout<<"akash"<<endl;	
	for(int n=0;n<5;n++) 
	cout<<*(me+n);
return 0;	
}
