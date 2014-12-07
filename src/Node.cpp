#include <iostream>
#include "Node.h"

template<class T>
Node<T>::Node(T in_value, Node* in_next){
	value = in_value;
	next = in_next;
};

template<class T>
Node<T>::~Node(){
	std::cout << "Deleted node with value "<< value << std::endl;
};

