#include<iostream.h>

class A
{
private:
	int m,n;
public:
	A(double x)
	{
		m=x;n=0;
	}
	A(int i=0,int j=0)
	{
		m=i;
		n=j;
	}
	friend istream & operator>>(istream &,A &);
	friend ostream & operator<<(ostream &,A &);
	friend A operator+(A & x,A & y)
	{
		A t;
		t.m=x.m+y.m;
		t.n=x.n+y.n;
        return t;
	}
};
istream & operator>>(istream &cin,A &a)
{
	cout<<"input";
	cin>>a.m>>a.n;
	return cin;
}
ostream & operator<<(ostream &cout,A &a)
{
	cout<<a.m<<a.n<<endl;
	return cout;
}
void main()
{
	A a1(3),a2=a1,a3(5);
	cin>>a1>>a2;
	a3=a1+a2;
	cout<<a3;
	a3=3.5;
	cout<<a3;
}
