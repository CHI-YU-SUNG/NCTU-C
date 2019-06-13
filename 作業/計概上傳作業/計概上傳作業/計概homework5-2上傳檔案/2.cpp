#include<stdio.h>
#include<graphics.h>
#include<conio.h>
class Rectangle
{
		int x;
		int y;
		int width;
		int height;
		int radius;
		int length;
	public:
		Rectangle(){
			x = 1;
			y = 1;
			width = 100;
			height = 100;
			radius = 100;
			length = 100;
		}
		void setx(int x1){
			x = x1;
		}
		void sety(int y1){
			y = y1;
		}
		void setwidth(int w){
			width = w;
		}
		void setheight(int h){
			height = h;
		}
		void setradius(int r){
			radius = r;
		}
		void setlength(int l){
			length = l;
		}
		int calPerimeter(){
			return 2 * (width + height);
		}
		int calArea(){
			return width * height;
		}
		void draw(){
			rectangle(x,y,x+width,y+height);
		}
		void draw_line(){
			line(x,y,x+width,y+height);
		}
		void draw_circle(){
			circle(x,y,radius);
		}
};

int main()
{
	class Rectangle s;
	initwindow(1000,1000);
	
//rectangle
	s.setx(10);
	s.sety(10);
	s.setwidth(100);
	s.setheight(30);
	s.draw();
	printf("perimeter is %d\n",s.calPerimeter());
	printf("area is %d\n",s.calArea());
//line
	s.draw_line();
//circle
	s.setx(450);
	s.sety(500);
	s.setradius(200);
	s.draw_circle();
	getch();
	closegraph();
	return 0;
} 
