#include<iostream>
using namespace std;
class Box
{
private:
	int length;
	int tj;
	int mj;
public:
    Box()
	{
		cin>>length;
	}
	int box_tj()
	{
		tj=length*length*length;
		return tj;
	}
	int box_mj()
	{
		mj=6*length*length;
		return mj;
	}
    void print()
	{
		cout<<"tj="<<tj<<"mj="<<mj;
	}
};
int main()
{
	Box z;
	z.box_tj();
	z.box_mj();
  z.print();
	return 0;
}
