#include <iostream>
#include <stdlib.h>
using namespace std;
class circle{ 		
  private:
    double rad, xcord, ycord, pi=3.14;
  public:
    void set (double r , double x, double y){
      rad=r; xcord=x; ycord=y; pi=3.14;
    }
    void get(){ 
      cout << "Enter radius: ";   cin >> rad;
      cout << "Enter X-Cordinate: "; cin >> xcord;
      cout << "Enter Y-Cordinate: " ; cin >> ycord;
    }
	double area(){
		   double a= pi*rad*rad;
           return (a) ;
	}
	double circumference() {
		   double c= 2*pi*rad;
		   return (c);
	}
    void show(){ 
           cout << "Radius= "<< rad << "\nX-Coordinate= " << xcord 
           << "\nY-Coordinate= " << ycord <<endl; 
    }
	};
int main(){
	circle c1, c2;
	c1.set (50, 10, 20);
	c1.show();
	cout <<"Area of Circle 1= " << c1.area() << endl;
	cout <<"Circumference of Circle 1= " << c1.circumference() << endl;
	c2.get ();
	c2.show();
	cout << "Area Of Circle 2 = " << c2.area() << endl;
    cout << "Circumference Of Circle 2 = " << c2.circumference() << endl;
	system("PAUSE");
	return 0;
}
  
  
  
  
  


