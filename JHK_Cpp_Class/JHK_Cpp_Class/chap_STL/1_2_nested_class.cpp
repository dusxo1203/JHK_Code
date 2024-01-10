#include<iostream>
using namespace std;

template<class T>
class slist
{
private:
	//------------- nested struct ���� ���� ---------------
	struct Node {
		T  data;
		Node*  next;
		Node(T d, Node* n) : data(d), next(n) {}
	};
	//------------- nested struct ���� �� -----------------
	Node* head;
public:
	class iterator;  // formard ����
	slist() : head(0) {}
	~slist() { while (!head) pop_front(); }
	void push_front(T d){
		head = new Node(d, head);
	}
	T pop_front() {
		T ret = head->data;
		Node* temp = head;
		head = head->next;
		delete temp;
		return ret;
	}
	iterator begin() {
		return iterator(head);
	}
	iterator end() {
		return iterator();
	}
	//------------- nested class ���� ���� ---------------
	class iterator {
		Node* current;
	public:
		iterator(Node* init = 0) : current(init) {}
		iterator& operator++() {
			current = ((current == 0) ? 0 : current->next);
			return *this;
		}
		T& operator*(){
			return current->data;
		}
		bool operator != (const iterator& i){
			return (current != i.current);
		}
	};
	//------------- nested class ���� �� -----------------
};
int main()
{
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	slist<int>::iterator p = s.begin();

	while (p != s.end()){
		cout << *p << endl;
		++p;
	}
	return 0;
}
