#include "my.h"

///**************************************************************************************************//
// complex constructor initializes each data member to zero.
complex_::complex_()
{
    a[5]=0;
    real =0;
    image =0;

}
///*************************************************************************************************//
// this function present menu and receive char* pool
//determination that achievement what operator

void selection::choose(complex_*  motley)
 {

  cout<<"         if you want insert new complex number,be should enter x=a+bj\n\n";
      cout<<"         if you want sub,be should x-y enter -xy\n\n";
          cout<<"         if you want multi,be should x*y enter *xy\n\n";
              cout<<"         if you want sum,be should x+y enter +xy\n\n";
                  cout<<"         if you want print,be should x enter ?x\n\n";
                      cout<<"         if exit enter @\n";


     for(int i=0;i<26;)
         {
             get_choose();//receive char* pool
                switch (pool[0])
                {
                    case '?'://overloading show array
                    !motley [ N ];
                    break;
                    case '+':// overloading sum class complex
                    motley[ N ]+motley[ M ];
                    break;
                    case '-'://overloading sub for complex
                    motley[ N ] -  motley [  M ];
                     break;
                    case '*'://overloading multi for complex
                    motley[ N  ]*motley   [  M ];
                     break;
                    case '@':// exit
                    exit(0);
                     break;

                    default:
                        N=pool[0]-97;
                        motley[ N ].displacement(pool);//copy array into object
                        i++;//counter





                }
         }

}
///*******************************************************************************************************//
//receive char* pool
void selection::get_choose()
{
     M=0;
     N=0;
    cout<<"\n         what is your command?";

    cin>>pool;
     N=pool[1]-97;
     M=pool[2]-97;
}
///*******************************************************************************************************///
// overloading show array
void complex_::operator ! ()
{
 cout<<"          ";
    puts(a);
}
///******************************************************************************************************///
// selection constructor initializes each data member to zero.
selection :: selection()
{
    pool[8]=0;
}
///********************************************************************************************************///
// overloading sum class complex
void complex_::operator + (complex_ b)
{
    complex_ c;
    c.real=real +b.real;
    c.image=image +b.image;
    cout<<"\n         sum is="<<c.real<<"+"<<c.image<<"i\n";

}
///********************************************************************************************************///
//// copy array into object analysis char* real & image

 void complex_::displacement(char* pool)
{   int i=2;
    if(pool[i]=='-')//analysis char* real & image
        real=-(pool[++i]-48);

    else
    real=pool[i]-48;
    if(pool[++i]=='-')
        image=-(pool[++i]-48);
        else
        image=pool[++i]-48;

    for(int j=0;j<8;j++)
        a[j]=pool[j];//copy array into object
}
///***********************************************************************************************************///
//overloading sub for complex
void complex_::operator -(complex_ b)
{
        complex_ c;
        c.real=real -b.real;
        c.image=image -b.image;

        cout<<"\n         subtraction is="<<c.real<<"+"<<c.image<<"i\n";

}
///**********************************************************************************************************//
// overloading multi for complex
void complex_ ::operator *(complex_ b)
{
    complex_ c;
    c.real=(real*b.real)-(image*b.image);
    c.image=(real * b.image)+(b.real * image);
    cout<<"\n         multi is ="<<c.real<<"+"<<c.image<<"i\n";
}
