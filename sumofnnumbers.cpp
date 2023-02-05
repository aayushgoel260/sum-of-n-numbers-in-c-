#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    for(int start=1;start<=n;start++){
        sum=sum+start;
    }


    cout<<sum<<endl;

    return 0;
}