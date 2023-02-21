#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1,Rect r2){
    double area;
    double nw1,nh1,nw2,nh2,nw3,nh3;

	nw1 = r1.x + r1.w; 
	nw2 = r2.x + r2.w; 
	nh1 = r1.y - r1.h; 
	nh2 = r2.y - r2.h; 
    

	double w1 = max(r1.x,r2.x);
	double w2 = min(nw1,nw2);
	nw3 = w2-w1;

	double h1 = min(r1.y,r2.y);
	double h2 = max(nh1,nh2);
	nh3 = h1-h2;

 	area = nw3*nh3;


	if(area <= 0)
		area = 0;

	return area;


}