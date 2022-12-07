#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <tchar.h>
using namespace std;
class matrix{
	private:
		unsigned int rows;
		unsigned int columns;
		double ary[3][3];
	public:
		matrix(){
		rows=3;
		columns=3;
		for(int i=0;i<rows;i++){
			for(int j=0;j<columns;j++){
				ary[i][j]=0;
			}
		}
	}
	matrix(double arry[3][3],unsigned int r,unsigned int c){
		rows=r;
		columns=c;
		for(int i=0;i<rows;i++){
			for(int j=0;j<columns;j++){
				ary[i][j]=arry[i][j];
			}
		}
	}
		
	void get(){
	cout<<"Enter the elements \n";
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		cin>>ary[i][j];
		}
		}
	}
	void show(){
		cout<<"The Matrix is\n";
		for(int i=0;i<rows;i++){
			for(int j=0;j<columns;j++){
			cout<<ary[i][j]<<" ";
			}
		cout << endl;
		}
	}
	double mod(matrix);
		void add(matrix ,matrix );
		void sub(matrix ,matrix );
		void mul(matrix ,matrix );
};
	void matrix ::add(matrix a,matrix b){
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < columns; j++){
			ary[i][j] = a.ary[i][j] + b.ary[i][j];
			}    
		}        
	}
	double matrix::mod(matrix a){
		double det;
		det=ary[0][0]*((ary[1][1]*ary[2][2])-(ary[2][1]*ary[1][2]))-ary[0][1]*((ary[1][0]*ary[2][2])-
			(ary[1][0]*ary[2][0]))+ary[0][2]*((ary[1][0]*ary[2][1])-(ary[1][1]*ary[2][0]));
		return det;
	}
	void matrix::sub(matrix a,matrix b){
		for(int i = 0; i <3; i++){
			for(int j = 0; j < 3; j++){
				ary[i][j] = a.ary[i][j] - b.ary[i][j];
			}    
		}
	}
	void matrix::mul(matrix a,matrix b){
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				for(int k=0;k<3;k++){
					ary[i][j] += a.ary[i][k] * b.ary[k][j];
				}
			}
		}
	}


int main(){
	matrix M1,M2,M3;
	M1.get();
	M2.get();
	M3.add(M1,M2);
	M3.show();
	M3.mul(M1,M2);
	system ("PAUSE");
	return 0;
}
