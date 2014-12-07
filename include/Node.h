#ifndef NODE_H
#define NODE_H

template <class T>
class Node{
public:
	Node(T in_value, Node* in_next);

	~Node();

	T getValue();

	Node* getNext();

	void setNext(Node* in_next);
private:
	T value;
	Node* next;
};

#endif