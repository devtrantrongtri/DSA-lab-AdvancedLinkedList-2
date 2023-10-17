#ifndef ELEMENT_H
#define ELEMENT_H
class element
{
    private:
        int data;
        int exponent;
        element *pointer;
    public:
        element();
        element(int , int);
        virtual ~element();
        int Getdata() {return data;}
        void Setdata(int val) {this->data = val;}
        int GetExponent() {return exponent;}
        void SetExponent(int val) {this->exponent = val;}
        element* Getpointer() {return pointer;}
        void Setpointer(element* val) {pointer = val;}
    protected:        
};
#endif //ELEMENT_H