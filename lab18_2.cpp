#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a,Rect *b){
	double h;
	double w;
	h = min((*a).y,(*b).y)-max((*a).y-(*a).h,(*b).y-(*b).h);
	w = min((*a).x+(*a).w,(*b).x+(*b).w)-max((*a).x,(*b).x);
	if(h > 0 && w > 0) return h*w;
	else return 0;
}
