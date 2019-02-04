#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void choose();

using namespace std;
// Simple class complex
class complex_
    {
        public:
        complex_();// constructor
         void  displacement(char*);//copy chre* in a[8] analysis char* real & image
         void   operator !();//overloading cout a
         void   operator +(complex_);//overloading sum
         void   operator -(complex_);//overloading sub
         void   operator *(complex_);//overloading multi

        private:// declaration
        char a[8];// copy choose(a=x+yi)
        int real;// x+yi x=real
        int image;// x+yi y=image

    } ;//end of complex

// Simple class selection
class selection
{
    public:
    selection();// constructor
    void choose (complex_*);// choose operator and determin
    void get_choose();// give shoose and set pool
    char pool[8];// arrye choose
    int  N,M;// declaration determination adopt complex
};//end of selection

#endif // MY_H_INCLUDED
