/*Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 
'Rectangle' with a function named 'Area' which returns the area. Length */

#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breath;
	public:

		int area(int length,int breath)
		{
			this->length=length;
			this->breath=breath;
			cout<<"\nArea of rectangle is="<<length*breath;
			return length;
			
		}
};
int main()
{
	rectangle r1;
	rectangle r2;
	r1.area(4,5);
	r2.area(5,8);
	
	
}
