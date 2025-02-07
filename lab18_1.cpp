#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2)
{
    double A;
    double w,h;
    
    if(R1.x <= R2.x)
    {  
        if(R1.x+R1.w >= R2.x+R2.w) w = R2.w;
        else w = (R1.x+R1.w) - R2.x;
    }
    else
    {
        if(R2.x+R2.w >= R1.x+R1.w) w = R1.w;
        else w = (R2.x+R2.w) - R1.x;
    }
    
    
    if(R1.y > R2.y)
        if(R2.y-R2.h >= R1.y-R1.h) h = R2.h;
        else h = R2.y- (R1.y-R1.h);
    else
        if(R1.y-R1.h >= R2.y-R2.h) h = R1.h;
        else h = R1.y- (R2.y-R2.h);
        
        
    A = w*h;
    if(A>0) return A;
    else return 0;
}

