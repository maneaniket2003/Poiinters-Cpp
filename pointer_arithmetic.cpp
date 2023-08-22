#include<iostream>
using namespace std;
int main() {
	int A[] = {2,4,6,8,10};
	int *p = A;
	int *q = &A[3];
	
	cout<<p<<endl;
	cout << "Hello" << endl;
	p++;
	
	cout<<p<<endl;
	
	cout<<q-p;
}
