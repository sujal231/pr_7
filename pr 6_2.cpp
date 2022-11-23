#include<iostream>

using namespace std;

class time_addition{
	
	public:
		
		int seconds1;
		int minutes1;
		int hours1;
		int seconds2;
		int minutes2;
		int hours2;
		int seconds;
		int minutes;
		int hours;
		int add;
		
		void time(int seconds1,int minutes1,int hours1,int seconds2,int minutes2,int hours2 )
		{
		    seconds=seconds1+seconds2;
	    	minutes=minutes1+minutes2 + seconds/60;;
    		hours= hours1+hours2 + (minutes/60);
	    	minutes %=60;
    		seconds %=60;
    		
    		cout<<"Time addition"<<endl;
    		cout<<"  "<<seconds1<<":"<<minutes1<<":"<<hours1<<endl;
    		cout<<" +"<<seconds2<<":"<<minutes2<<":"<<hours2<<endl;
    		cout<<" ="<<seconds<<":"<<minutes<<":"<<hours<<endl;
			cout<<" HH"<<":"<<"MM"<<":"<<"SS"<<endl<<endl;

		}
};

class time_subtraction : public time_addition{
	
		public:
		
		void time(int seconds1,int minutes1,int hours1,int seconds2,int minutes2,int hours2 )
		{
		    seconds=seconds1-seconds2;
	    	minutes=minutes1-minutes2 - seconds/60;;
    		hours= hours1-hours2 - (minutes/60);
	    	minutes %=60;
    		seconds %=60;
    		
    		cout<<"Time subtraction"<<endl;
    		
    		cout<<"  "<<seconds1<<":"<<minutes1<<":"<<hours1<<endl;
    		cout<<" -"<<seconds2<<":"<<minutes2<<":"<<hours2<<endl;
    		cout<<" ="<<hours<<":"<<minutes<<":"<<seconds<<endl;
    		cout<<" HH"<<":"<<"MM"<<":"<<"SS";
	
		}
	
}; 
main()
{
	int seco1,min1,hour1;
	int seco2,min2,hour2;
	
	cout<<"Enter hours(1)";
	cin>>hour1;
	cout<<"Enter minutes(1)";
	cin>>min1;
	cout<<"Enter seconds(1)";
	cin>>seco1;
	cout<<"Enter hours(2)";
	cin>>hour2;
	cout<<"Enter minutes(2)";
	cin>>min2;
	cout<<"Enter seconds(2)";
	cin>>seco2;
	time_subtraction obj;
	obj.time_addition::time(hour1,min1,seco1,hour2,min2,seco2);	
	obj.time(hour1,min1,seco1,hour2,min2,seco2);	
}
