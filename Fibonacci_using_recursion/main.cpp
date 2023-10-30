#include <iostream>
/*Fibonacci sequence is:
1,1,2,3,5,8,13,21,..
The next term(strating with n=3) is the sum of the preceding 2 terms.
The first 2 terms are 1 no matter what.So,this will be our base-case.
The recursive formula for nth term of the sequence is:
an=a(n-1)+a(n-2)
*/
using namespace std;

/*Creaing a function called Fibonacci where base-case will be 1 when the value of n=1,2(i.e n<=2).The function will return the value of the nth term which is of the integer datatype.*/
int Fibonacci(int n){
if(n<=2){
return 1;}
else{
return Fibonacci(n-1)+Fibonacci(n-2);}
}

int main()
{ cout << "**********************************************************************************************************************" << endl;
    cout << "This program lets you input a value n and output the terms of the Fibonacci sequence up to and including that term." << endl;
    cout << "**********************************************************************************************************************" << endl;
    int n;
    do {
    cout<<"Enter value for n(the number of terms that you want: ";
cin>>n;
    }while(n<=0);
    int i=1;
    for(;i<n;i++){
    cout<<Fibonacci(i)<<',';}
    cout<<Fibonacci(n)<<endl;//The nth term is excluded from the loop for formatting purpose
    cout << "**********************************************************************************************************************" << endl;
    cout<<"\t \t \t The end"<<endl;
    cout << "**********************************************************************************************************************" << endl;
    return 0;
}
