#include<iostream>
using namespace std;
class point()
{ public:
	point(){x=0;y=0}
	//point(x=0;y=0):x(xx),y(yy)
	point(const point&r){x=r.x;y=r.y}
	void negate(){x=-x;y=-y;}
	float norm(){return aqrt(x*x+y*y)}
	void print(){cout<<x<<y;
	}



pivate: float x,y
}
