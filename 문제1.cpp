#include <iostream>

using namespace std;

class CBox {
protected:
	double width;
public :
	CBox();
	CBox(double);
};

class ChildBox : CBox 
{
public:
	void setWidth(double w) {
		width = w;
	}
};