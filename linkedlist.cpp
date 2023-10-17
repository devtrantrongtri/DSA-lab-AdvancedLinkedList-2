#include "linkedlist.h"
#include <iostream>
using namespace std;
linkedlist::linkedlist()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->nNum = 0;
}
linkedlist::~linkedlist(){}

void linkedlist::InsertFirst(element*e) {
    if(this->head == nullptr)
        this->head=this->tail = e;
    else{
        e->Setpointer(this->head); // set pointer of element e by head
        this->head = e; // set head of linkedlist = e; ???
    }
    this->nNum++;    
}
void linkedlist::InsertTail(element *e)
{
    if(this->head == nullptr){
        this->head = this->tail = e; // khi head tro vao e thi e tro vao null ; do da thiet lap contructor element.
    }else{
        this->tail->Setpointer(e); // defalt value of tail is null; cause tail is a member of element ;so it can using setpointer from element . setpointer to set poiter of "this" being point to it.
        this->tail = e;
    }// this->tail đầu tiên giúp thay đổi old tail cuối thành e ; và thứ 2 giúp đổi e thành new tail.
    this->nNum++;
}
void linkedlist::Travel(){
    element *p =  this->head;// p.data = head.data ; p.pointer = head.pointer
    cout<<"f(x) = " ;
    while (p!=nullptr) //
    {
        cout<<p->Getdata()<<"X^"<<p->GetExponent(); //return p.data;
        p=p->Getpointer(); // make p store address of next node.
        if(p != nullptr) cout << "+";
    }
    
}

bool linkedlist::DeleteFirst(){
    if(this->head == nullptr)
        return false;
    else{
        element*p = this->head;
        this->head = this->head->Getpointer(); // set new head = the second node.
        delete p; // delete head before
        return true;
    }    
}
void linkedlist::RemoveAll(){
    if(this->head == nullptr) this->DeleteFirst();
    do
    {   
       element *p = this->head;
       this->head = this->head->Getpointer();
       delete p;
        
    } while (this->head != nullptr);
    
}
bool linkedlist::DeleteTail(){
	if(this->nNum==0) return false;
	if(this->nNum==1) return this->DeleteFirst();
	else {
		   element *p=this->head;
		   while(p->Getpointer()->Getpointer()!=nullptr) // 1 hàm này hay này
			   p=p->Getpointer();
		   delete this->tail;   
		   tail=p;        
		   tail->Setpointer(nullptr);
		   this->nNum--;
		   return true;
	}
}
void linkedlist::AddBehind(element *target, element *pnew) {
    if (!target || !pnew) return; // Check for null pointers

    element *p = this->head;

    // Find the target node
    while (p != nullptr && p != target) {
        p = p->Getpointer();
    }

    // If target node is not found, just return
    if (!p) return;

    // Insert pnew behind target node
    pnew->Setpointer(target->Getpointer());
    target->Setpointer(pnew);
    this->nNum++;
}

void linkedlist::deleteNode(element *pnew) {
    if (!pnew || !this->head) return; // Kiểm tra con trỏ null

    // Nếu muốn xóa nút đầu tiên
    if (this->head == pnew) {
        this->head = this->head->Getpointer();
        delete pnew;
        this->nNum--;
        return;
    }

    element *p = this->head;
    while (p->Getpointer() != nullptr && p->Getpointer() != pnew) {
        p = p->Getpointer();
    }

    // Nếu không tìm thấy nút, thoát
    if (p->Getpointer() == nullptr) return;

    // Xóa nút và cập nhật con trỏ
    element *temp = p->Getpointer();
    p->Setpointer(temp->Getpointer());
    delete temp;
    this->nNum--;
}

void linkedlist::reduce()
{
    element *p = this->head->Getpointer() ;
    while( p != nullptr)
    {
        element *q=p->Getpointer();
        while(q = this->tail)
        {
             
            q->Getpointer();
        }
        p = p->Getpointer();
    }
}
