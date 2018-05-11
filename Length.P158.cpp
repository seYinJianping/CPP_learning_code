#include<iostream>
#include<cmath>
using namespace std;
class zb1
{
private:
	int x,y;
public:
zb1(int a,int b)
	{
		x=a;
		y=b;
	}
	int Getx()
	{
		return x;
	}
	int Gety()
	{
		return y;
	}
	void show1()
	{
		cout<<"x="<<x<<"y="<<y;
	}
};
class zb2:private zb1
{
private:
	int m,n;
	double result;
public:
	zb2(int a,int b,int c,int d):zb1(a,b)
	{
		m=c;
		n=d;
	}
	void output()
	{
		cout<<"m="<<m<<"n="<<n<<endl;
		cout<<"x="<<Getx()<<"y="<<Gety()<<endl;
	}
	void l()
	{
		result=sqrt((m-Getx())*(m-Getx())+(n-Gety())*(n-Gety()));
		cout<<"l="<<result<<endl;
	}
};
int main()
{
	zb2 b1(1,2,3,4);
	b1.output();
	b1.l();
	return 0;
}
