#include <iostream>
#include <stdlib.h>
using namespace std;
class tree {
private:
	unsigned int height;										//Unsigned intiger value 
public:
	tree() {										//No argumet constructer Height=0
		height =0;
		cout << "A tree of Zero height was created\n";
	}
	tree(int h) {												//One Argument constructer
		height = h;
		cout << "A tree has been created\n";
	}
	~tree() {													//Destructor
		cout << "A tree has been destoryed\n";
	}
	void grow(int meter) {										//Adding argument value to the height
		height = meter;
	}
	void printsize() {
		cout << "Height of tree: " << height << "Meter"<< endl;
	}
};
void create_tree() {
	tree t1; 
	t1.grow (16);  												//Set the height 16 meter						
	t1.printsize();
}
int main() {
	create_tree();												
	system ("PAUSE");
	return 0;
}
