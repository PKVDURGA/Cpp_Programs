#include<iostream>
using namespace std;
class Minus {
	public:
		int num;
		Minus(int n):num(n){ }
		Minus operator -(){
			return - num;
		}
		void display(){
			cout<<"Minus operator overloading value is:"<<num;
		}

};
main(){
	Student s1(78),s2(89);
	Student s3=s1+s2;
	s3.display();
	Minus m(10);
	Minus m1=-m;
	m1.display();	
}
