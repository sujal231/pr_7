#include<iostream>

using namespace std;

class maths{
	
	public :
		float dollar ;
		float rupee;
		
		void operator -()
		{
			cout<<"Enter dollar= ";
			cin>>dollar;

			
			rupee=dollar/81.65;
			
			cout<<"rupee= "<<rupee<<endl;
		}
		
		void operator +()
		{
			cout<<"Enter rupee= ";
			cin>>rupee;

			
			dollar=rupee*81.65;
			
			cout<<"dollar= "<<dollar;
		}
};

main()
{
	maths obj;
	- obj;
	+ obj;
}
