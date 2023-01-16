#include <iostream>
#include <conio2.h>
using namespace std;
class complejo{
      private : int r,i;
      public : void pidecomplejo(void); 
             void mostrarcomplejo (void);
              
               void operator +(complejo a,complejo b);
               };


complejo::complejo(void){
                                        }
complejo::complejo(int r,int i){
                       complejo::r=r;
                       complejo::i=i;
                       }
void complejo::mostrar(void){
     if(i>0)
        cout<<r<<"+"<<i<<endl;
        else
        cout<<r<<i<<endl;
        }
void complejo::suma(complejo a,complejo b){
     r=a.r+b.r;
     i=a.i+b.i;
     }
complejo complejo ::operator +(complajo aux){
         
         
         
         }


int main(){
    complejo a(1,2),b(3,4),c(0,0);
    c.suma(a,b);
    a.mostrar();
    b.mostrar();
    c.mostrar();
    getch();
    return 0;
    
