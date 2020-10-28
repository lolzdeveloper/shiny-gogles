#include <iostream>
#include <cmath>
using namespace std;
//This code is to find Armstrong Number
int main(){

    int n;
    cin>>n;

    int sum = 0;
    int originaln = n;

    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n = n/10 ;
    }

    if(sum==originaln){
        cout<<"Armstrong Number"<<endl;
    }

    else{
        cout<<"This is Not an Armstrong Number"<<endl;
    }


    return 0;
}
