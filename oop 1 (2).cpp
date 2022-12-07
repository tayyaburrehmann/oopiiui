
#include <iostream>
#include <stdlib.h>
using namespace std;
class rectangle {
private:
	int length ; int width ;
public:
	void set (int l, int w){
    length=l; width=w;
    }
	void get(){
		cout << "Enter Length:  "; cin >> length;
		cout << "Enter Width :  "; cin >> width;
	}
	int area(){
	int a=length*width;	
	return (a); 
	 }
	int parameter(){ 
	int p=(length+width)*2;
	return (p);
	}
	void draw(){
		int i,j;
		for(i=0 ; i< width ; i++){
			for(j=0 ; j<length; j++){
			if(i!=0 && j!=0 && i!=width-1 && j!=length-1)
			cout <<" ";
				else cout <<"*";
			}
			cout << endl;
		}
	}
};
int main(){
	rectangle r1;
	r1.get();
	cout << "Area Of Rectangle = " << r1.area() << endl;
	cout << "Parameter Of Rectangle = " << r1.parameter() << endl;
	r1.draw(); cout << endl;
	system("PAUSE");
	return 0;
}

/*
#include <iostream>
#include <stdlib.h>
using namespace std;
class temperature{
private:
	double c;
public:
	temperature( ){
		c=0;
	}
void get_c(){
   
	cout<<"Enter the temperature in centigrade "; cin>>c;
   
}
void get_f(){
	double f;
	cout<<"Enter the temperature in farenheit "; cin>>f;
	c=(f-32)*(5.0/9.0);
}
void show_c(){
	cout<<"current temperature in centigrade is :"<<c<<endl;
}
void show_f(){
	double b;
	b=(9.0/5.0)*c+32;
	cout<<"current temperature in farenheit is :"<<b<<endl;
	
}
};
int main(){
temperature t1, t2;
t1.get_c();
t1.show_c();
t1.show_f();
t2.get_f();
t2.show_f();
t2.show_c();
return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;
class temperature{
	private:
		double c;
	public:
		temperature(){
		c=0;
		}
	void get_c(){
		cout<<"Enter the temperature in centigrade: ";cin>>c;
	}
	void get_f() {
		double f;
		cout<<"Enter the temperature in farenheit: "; cin>>f;
		c=(f-32)*(5.0/9.0);
 	}
	void show_c(){
		cout<<"current temperature in centigrade is: "<<c<<endl;
	}
	void show_f(){
		double b;
		b=(9.0/5.0)*c+32;
		cout<<"current temperature in farenheit is: "<<b<<endl;
	}
};
int main(){
temperature t1, t2;
t1.get_c();
t1.show_c();
t1.show_f();
t2.get_f();
t2.show_f();
t2.show_c();
system ("PAUSE"); 
return 0;

}
*/


