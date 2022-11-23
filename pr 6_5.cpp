#include<iostream>

using namespace std;

class maths{
	
	public :
		float time;
		float distance;
		float speed;
		
		void operator +()
		{
			cout<<"Enter time= ";
			cin>>time;
			cout<<"Enter distance= ";
			cin>>distance;
			
			speed=distance/time;
			
			cout<<"Speed= "<<speed;
		}
};

main()
{
	maths obj;
	+ obj;
}
