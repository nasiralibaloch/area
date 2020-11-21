#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int area(int);
float area(float,float);
float area(float,float,float);
int area(int r)
{
	float area;
	
//	cout<<"enter radius area of circle";
	//cin>>r;
	area=3.14*r*r;
	cout<<"area of circle is ="<<area<<endl;
}
float area(float a,float b)
	    	{
	    		float area;
	    	//cout<<" enter area of rectangle";
	    	//cin>>a>>b;
	    	area=a*b;
	    	cout<<"rec is ="<<area<<endl;	
			}
float area(float a,float b,float c)
{ float area;
			//cout<<" enter area of triangular";
			//cin>>a>>b>>c;
			area=a*b*c;
			cout<<"tri is ="<<area<<endl;
}

int main()
{
	cout<<"area of circle"<<endl;
	cout<<"area of rectangular"<<endl;
	cout<<"area of triangular"<<endl;
	area(4);
	area(3.4,4.4);
	area(45.3,23.3,12.3);
	return 0;
}

