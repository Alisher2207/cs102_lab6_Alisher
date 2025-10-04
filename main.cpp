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


// problem 5
    // int swap(int a,int b) {
    //     int d;
    //     d=a+b;
    //     a=d-a;
    //     b=d-b;
    //     cout<<a<<" "<<b<<endl;
    // }
    // int main() {
    //     int a,b;
    //     cin>>a>>b;
    //     swap(a,b);
    // }
//problem 6
    // int factorial(int a=1) {
    //     return a;
    // }
    // int main() {
    //     cout<<factorial();
    // }
//problem 7
    // int gcd (int a,int b){
    //     if (b==0){
    //         return a;
    //     }
    //     else {
    //         return gcd(b,a%b);
    //     }
    // }
    // int main() {
    //     long long int a,b;
    //     cin>>a>>b;
    //     cout <<"gcd is "<<gcd(a,b);

    // }
// Problem 8
    // int maxim (int a,int b,int c){
    //     if (a>=b and a>=c){return a;}
    //     else if (b>=c and b>=a){return b;}
    //     else if(c>=b and c>=a){return c;}
    //     return 0;
    // }
    // int main() {
    //     long long int a,b,c;
    //     cin>>a>>b>>c;
    //     cout <<"max num is "<<maxim(a,b,c);

    // }
//problem 9
    // int sum (int a , int b){
    //     return a+b;
    // }

    // int subtract (int a , int b){
    //     return a-b;
    // }
    // int product (int a , int b){
    //     return a*b;
    // }
    // int division (int a , int b){
    //     return a/b;
    // }
    // int main()
    // {
    //     long long int a , b;
    //     cout <<" input 2 number \n";
    //     cin>>a >>b;
    //     cout<<"sum "<<sum(a,b)<<"\n";
    //     cout<<"subtract "<<subtract(a,b)<<"\n";
    //     cout<<"product "<<product(a,b)<<"\n";
    //     cout<<"division "<<division(a,b)<<"\n";

    //     return 0;
    // }
// Problem 10
    // #include <iostream>
    // using namespace std;
    // int trianglenumbers(int n=72){
    //     for(int i=1;i<=72;i++){
    //         cout<<(i)*((i)+1)/2<<" ";
    //         if(i%5==0){
    //             cout<<endl;
    //         }
    //     }
    //     return 00;
    // }

    // int main()
    // {
    //     trianglenumbers();

    //     return 0;
    // }
//problem 11

    // #include <iostream>
    // #include <string>
    // using namespace std;

    // void displayEven(int n){
    //     string st=to_string(n);
    //     for (int i=0;i<= size(st);i++){

    //      if(char(st[i])%2==0 && char(st[i])%2!=48){
    //          cout<<st[i];
    //      }
    //     }
    //    \
    // }

    // int main()
    // {
    //     int n;
    //     cout <<"input integer ";
    //     cin>>n;
    //     displayEven(n);

    //     return 0;
    // }
// Problem 12

    // #include <iostream>
    // #include <string>
    // #include <cmath>
    // using namespace std;

    // void isArmstrong(int sum,int num){
    //     if (sum==num){
    //         cout <<"armstrong";
    //     }
    //     else cout <<"it is not armstrong";
    // }

    // int cubeOfDigits(int n){
    //     string st=to_string(n);
    //     int d,sum=0;
    //     for (int i=0;i<size(st);i++){
    //      d =char(st[i])-48;
    //       sum+=pow(d,3);
    //     }
    //     return sum;
    // }

    // int main(){
    //     int n;
    //     cout <<"input integer ";
    //     cin>>n;
    //     isArmstrong(cubeOfDigits(n),n);

    //     return 0;
    // }
// problem 13
// int numberOfDaysInFebruary(int year) {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return 29;  // Leap year
//     }
//     else {
//         return 28;  // Normal year
//     }
// }

// int main() {
//     cout << "Year   Days in February" << endl;
//     cout << "-----------------------" << endl;

//     for (int year = 1985; year <= 1993; year++) {
//         cout << year << "    " << numberOfDaysInFebruary(year) << endl;
//     }

//     return 0;
// }

//Problem 14
    // double fiv(double amt, double mir, int yrs) {
    //     return amt * pow(1 + mir, yrs * 12);
    // }

    // int main() {
    //     double amt, air;
    //     int yrs;

    //     cout << "Amount: ";
    //     cin >> amt;

    //     cout << "Annual rate (%): ";
    //     cin >> air;

    //     cout << "Years: ";
    //     cin >> yrs;

    //     double mir = air / 1200;
    //     double fv = fiv(amt, mir, yrs);

    //     cout << "Future value: " << fv << endl;
    //     return 0 ;
    // }
//Problem 15
    // void printASCII(char f,char s ){
    //     int d=1;
    //     for (int i=int(f);i<=int(s);i++){
    //         cout << char(i)<<" ";
    //         if(d%5==0){cout <<endl;}d++;
    //     }

    // }

    // int main()
    // {
    //     char f,s;
    //     cout << "input 2 characters ";
    //     cin>>f>>s;
    //     printASCII(f,s);
    //     return 0;
    // }
 // Problem 16
    //     void printMatrix( int f ){
    //     for (int i=0 ; i<=f; i++){
    //         for(int j=0; j<=f;j++){
    //             cout << j<< " ";
    //         }cout << endl;
    //     }

    // }

    // int main()
    // {
    //     int f;
    //     cout << "input 2 characters ";
    //     cin >> f;
    //     printMatrix(f);
    //     return 0;
    // }
// Problem 17
//Problem 18
//Problem 19
    // void sorted( double a,double b, double c ){
    //     double arr[]={a,b,c};

    //      for (int i = 0; i < 3 - 1; i++) {
    //         for (int j = 0; j < 3 - i - 1; j++) {
    //             if (arr[j] > arr[j + 1]) {
    //                 // swap
    //                 int temp = arr[j];
    //                 arr[j] = arr[j + 1];
    //                 arr[j + 1] = temp;
    //             }
    //         }

    //      }
    //         for (int i = 0; i < 3; i++) cout << arr[i] << " ";
    //     cout << endl;

    // }

    // int main()
    // {
    //     double a,b,c;
    //     cout << "input 3 mumb ";
    //     cin >>a>> b >>c ;
    //     sorted(a,b,c);
    //     return 0;
    // }
//problem 20

// string convertMillis(long millis) {
//     long totalSeconds = millis / 1000;      // convert to seconds
//     long seconds = totalSeconds % 60;       // remaining seconds
//     long totalMinutes = totalSeconds / 60;
//     long minutes = totalMinutes % 60;       // remaining minutes
//     long hours = totalMinutes / 60;         // remaining hours


return 0;


}