#include <iostream>
#include "Node.cpp"
using namespace std;

int main(){
	cout << "Hello World" << endl;
	Node<int>* first = new Node<int>(2, NULL);

	delete first;
}