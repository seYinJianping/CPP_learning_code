#include<iostream>
using namespace std;
class Test
{
public:
	int init(int a,int b);
	void print();
private:
	int a;
	int b;
	int x;
};
int main()
{
	Test c;
	c.init(200,60);
	c.print();
	return 0;
}
int Test::init(int p,int q)
{
	a=p;
	b=q;
	x=p-q;
	return x;
}
void Test::print()
{
	cout<<a<<"-"<<b<<"="<<x<<endl;
}

