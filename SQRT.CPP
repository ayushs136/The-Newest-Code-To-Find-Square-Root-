#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(0));
    int n, g, x, a=0;
    cout<<"\nENTER THE NUMBER U WANNA FIND THE SQAURE ROOT: ";
    cin>>n;
    g = rand() % n/2;
    if(g>0){
    cout<<g<<endl;
    while(n){

        double d = g * g;
        if(d==n){
             break;
        }

            double c = n/g;
            a = (g+c) / 2;
            g = a;


    }
    cout<<"sqrt: "<<a<<endl;
    }
return 0;
 }
