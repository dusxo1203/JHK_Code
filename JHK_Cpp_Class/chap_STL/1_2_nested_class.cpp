#include<iostream>
using namespace std;

template<class T>
class slist
{
private:
	//------------- nested struct 선언 시작 ---------------
	struct Node {
		T  data;
		Node*  next;
		Node(T d, Node* n) : data(d), next(n) {}
	};
	//------------- nested struct 선언 끝 -----------------
	Node* head;
public:
	class iterator;  // formard 선언문
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
	//------------- nested class 선언 시작 ---------------
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
	//------------- nested class 선언 끝 -----------------
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
