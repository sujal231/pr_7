#include<iostream>

using namespace std;

class maths1{
	
	public:

		int z;
		int s;
		void operator ++()
		{
			cout<<"Enter num:-";
			cin>>s;
			z=s*s*s;
	
			cout<<"Cube ="<<z<<endl<<endl;
		}		
};

class maths2{
	
	public:
		
		double k,p;
		void operator --()
		{
			cout<<"Enter num:-";
			cin>>p;
			k=p*p;
			
			cout<<"square = "<<k;
		}
		
};

main()
{
	maths1 obj;
	++ obj;
	
	maths2 obj2;
	-- obj2;
}
