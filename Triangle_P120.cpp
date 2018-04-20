#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
private:
	int a;
	int b;
	int c;
	int l;
	int s;
public:
	Triangle()
	{
		cin>>a>>b>>c;
	}
	int triangle_l()
	{
		l=a+b+c;
		return l;
	}
	int triangle_s()
	{
		int p;
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		return s;
	}
	void print()
	{
		cout<<"l="<<l<<"s="<<s<<endl;
	}
};
int main()
{
	Triangle t;
	t.triangle_l();
	t.triangle_s();
  t.print();
	return 0;
}
