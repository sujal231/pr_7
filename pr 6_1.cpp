#include<iostream>
using namespace std;


class maths {
	
	public:
		
		double square,rectangle,triangle,circle;
		void formula(int s)
		{
			square=s*s;
			cout<<endl<<"square arey"<<endl;
			cout<<s<<"*"<<s<<"=";
			cout<<square<<endl<<endl;
		}
		
			void formula(int s,int z)
		{
			rectangle=s*z;
			cout<<"rectangle arey"<<endl;
			cout<<s<<"*"<<z<<"=";
			cout<<rectangle<<endl<<endl;
		}
			void formula(int s,int z,int e)
		{
			triangle=(s*z)/2;
			cout<<"triangle arey"<<endl;
			cout<<"1/2"<<"*"<<s<<"*"<<z<<"=";
			cout<<triangle<<endl<<endl;
		}
			void formula(int r,int e,int s,int z)
		{
			circle=3.14*r*r;
			cout<<"circle arey"<<endl;
			cout<<3.14<<"*"<<r<<"*"<<r<<"=";
			cout<<circle<<endl;
		}	
};  

main()
{
		
		int s,z,r,e;
	
		cout<<"Enter s:-";
		cin>>s;
		cout<<"Enter z:-";
		cin>>z;
		cout<<"Enter r:-";
		cin>>r;
	
	maths obj2;
	obj2.formula(s);
	obj2.formula(s,z);
	obj2.formula(s,z,e);
	obj2.formula(r,s,z,e);
}
