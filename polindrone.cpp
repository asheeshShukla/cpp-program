#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
        cin>>n;
    int rev=0;
    while(n!=0){
        int last=n%10;
        rev=rev*10+last;
        n=n/10;
        }
        if(n==rev)
       cout<< "polindrone"<<endl;
       else
       cout<<"not polindrone"<<endl;
        return 0;
}
