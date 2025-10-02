#include<iostream>
using namespace std;
//problem1
int product (float a, float b) {
return a*b;}
//problem2
/*void lineracceleration () {
    float v1, v2, t;
    cout<<"Enter v1: ";
    cin>>v1;
    cout<<"Enter v2: ";
    cin>>v2;
    cout<<"Enter t: ";
    cin>>t;

    cout << "a=" <<float(v2-v1)/t << endl;
}
//problem3
void fun () {
    float radius ;
    cout<<"Enter radius: ";
    cin>>radius;
    float area ;
    float PI = 3.14159;
     area = product (radius,radius)*PI;
cout<<"Area is: "<<area<<endl;

}
//problem 4
void fun1 () {
    float a , b;
    cout<<"Enter the value of a  : ";
    cin>>a;
    cout<<"Enter the value of b: ";
cin>>b;
    cout<<"Area is: "<<product (a,b)<<endl;
    cout<<"perimeter is: "<< 2 * (a+b)<<endl;
}


// problem5
int swap (int&a, int&b) {

}
int main() {
   /* float x, y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<"Product: " << product (x,y);
    cout<<"rounded: " << int (product (x,y ));


//problem2

    lineracceleration ();


//problem3

   fun () ;


// problem4
    fun1();


return 0;


}