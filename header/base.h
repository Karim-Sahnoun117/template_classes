#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

template <typename T ,typename S>
class base {
    protected :
T name ;
S ID ;

public:
base (T _name,S _ID):name(_name),ID(_ID){}
~base(){}
virtual void affiche()const=0;


};

#endif // BASE_H_INCLUDED
