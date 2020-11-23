// Nama : 1. Bahrul Faizi 			(14116037)
//		  2. Dicky Hermawan 		(14116005)
//		  3. Muhamad Arwin Wijaya 	(14116050)
//		  4. Yoga Dwi Septana 		(14116006)

#include <iostream>
using namespace std;
int main(){
	int x1, x2, y1, y2, k=0;
	float x_inc, y_inc, p1, p2, ay, ax, step;
	int roundx, roundy;
	
	cout << "\t\tAlgoritma DDA";
	cout << "\n\nInput X1 : ";
	cin >> x1;
	cout << "\nInput Y1 : ";
	cin >> y1;
	cout << "\nInput X2 : ";
	cin >> x2;
	cout << "\nInput Y2 : ";
	cin >> y2;
	
	cout << "\n\n" << "(" << x1 << "," << y1 << ")";
	cout << " -------> ";
	cout << "(" << x2 << "," << y2 << ")";
	
	p1 = x1;
	p2 = y1;
	ax = x2 - x1;
	ay = y2 - y1;
	if(ax>=ay){
		step = ax;
	}
	else{
		step = ay;
	}
	
	x_inc = ax/step;
	y_inc = ay/step;
	roundx = p1;
	roundy = p2;

	cout << "\n\nK \t\t X \t\t Y \t (Round X(" << x1 << "), Round Y(" << y1 << ")\n";
	
	while((x2!=roundx)&&(y2!=roundy)){
		if(((p1+x_inc)-p1)>=0,5){
			roundx = p1 + 1;
		}
		else{
			roundx = p1;
		}
		if(((p2+y_inc)-p2)>=0,5){
			roundy = p2 + 1;
		}
		else{
			roundy = p2;
		}
		
		p1 = p1 + x_inc;
		p2 = p2 + y_inc;
		
		cout << k << " \t\t" << p1 << "\t\t " << p2 << " \t\t " << roundx << "," << roundy << "\n"; 
		k = k+ 1;
	}
		
	return 0;
}
