#include <iostream>
#include "linkedlist.h"
using namespace std;
int main()
{
linkedlist *list_[4];
for(int i =0 ; i<4; i++) list_[i] = new linkedlist;
    element *e;
    e=new element(9,3);
    list_[0]->InsertTail(e);
    e = new element(10,2);
    list_[0]->InsertTail(e);
    e = new element(8,2);
    list_[0]->InsertTail(e);
    list_[0]->Travel();
cout<<endl;
    e=new element(9,3);
    list_[1]->InsertTail(e);
    e = new element(10,2);
    list_[1]->InsertTail(e);
    e = new element(8,2);
    list_[1]->InsertTail(e);
    e = new element(8,2);
    list_[1]->InsertTail(e);
    list_[1]->Travel();
    cout<<endl;
    list_[1]->reduce();
    list_[1]->Travel();
    cout<<endl;
    list_[2]->add(list_[0],list_[1]);
    list_[2]->Travel();
    list_[3]->multiple(list_[0],list_[1]);
    list_[3]->Travel(); 
    
    

    return 0;
}
