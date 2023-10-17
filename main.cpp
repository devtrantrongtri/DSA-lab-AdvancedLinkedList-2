#include <iostream>
#include "linkedlist.h"
using namespace std;
int main()
{
    linkedlist *list_ = new linkedlist() ;
    element *e;
    e=new element(9,3);
    list_->InsertTail(e);
    e = new element(10,2);
    list_->InsertTail(e);
    e = new element(8,2);
    list_->InsertTail(e);

    list_->Travel();
    list_->DeleteFirst();
    cout<<"\n";
    list_->Travel();
    list_->RemoveAll();
    
    

    return 0;
}
