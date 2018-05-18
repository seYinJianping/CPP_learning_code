#include<iostream>
using namespace std;
const double pi=3.1415926;
class Hight
{
private:
	int h;
public:
	Hight(int a)
	{
		h=a;
	}
	int hight_r()
	{
		return h;
	}
};
class Circle
{
private:
	int r;
public:
	Circle(int b)
	{
		r=b;
	}
	int circle_r()
	{
		return r;
	}
};
class Cylinder:public Circle,public Hight
{
public:
	double tj;
	double bmj;
	double R,H;
public:
	Cylinder(int a,int b):Hight (a),Circle(b)
	{}
	void tiji()
	{
		R=hight_r();
		H=circle_r();
		tj=pi*R*R*H;
		cout<<"volume="<<tj<<endl;
	}
	void  biaomianji()
	{
		R=hight_r();
		H=circle_r();
		bmj=pi*R*R*2+2*pi*R*H;
		cout<<"area="<<bmj<<endl;
	}
};
int main()
{
	Cylinder s(3,5);
	s.tiji();
	s.biaomianji();
	return 0;
}
