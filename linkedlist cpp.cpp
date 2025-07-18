#include "LinkedList.h"
int main() {
	LinkedList ls;
	ls.insertAtEnd(10);
	ls.insertAtEnd(20);
	ls.insertAtEnd(30);
	ls.display();
	ls.insertAtBeginning(40);
	ls.display();
	ls.deleteNode(20);
	ls.display();
	
}