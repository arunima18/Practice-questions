#include<iostream>
using namespace std;
int main(){
char a;
int b;
b=int(a);
cout<<"enter a character"<<endl;
cin>>a;
    if ((a>64)&&(a<91)){
    cout<<"Alphabet"<<endl;
    }
    else {
    cout<<"Not an alphabet"<<endl;
    }
return 0;
}
