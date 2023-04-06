#include "LinkedList.h"
#include <iostream>
using namespace std;


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함
template <typename T>
//LinkedList class를 상속받음,,,,
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){
			//first가 0이면 false반환
			if(this->first == 0){//비어있는 경우
			    return false;/*main함수..switch문*/}
			    
			    else{
			    Node<T> *ptr = this->first;//후입선출이라서 first가 가리키는 가장 최근에 들어온 노드를 삭제
			    
			 this->first = this->first->link;//삭제될 data 밑에(?)있는 data가 first가 됨.
			    
			    
			    element = ptr->data;//삭제될 data

			    delete ptr;


			    this->current_size--;
		
			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제


			return true;
			}
		}
};

