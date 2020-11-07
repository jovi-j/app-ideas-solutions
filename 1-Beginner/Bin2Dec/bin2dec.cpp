#include <iostream>
#include <cmath>
using namespace std;

int convert2Dec(int bin){
	int number = 0;
	for(int i = 7;i > -1; i--){
			double power = pow(10,i);
			if((bin - power) > 0){
				number = number + pow(2, i);
				bin = bin - power;
			}else if((bin - power) == 0){
				number++;
			}
	}
	return number;
}


int main(){
	int number;
	cin >> number;
	cout << convert2Dec(number) << endl;
	return 0;
}
