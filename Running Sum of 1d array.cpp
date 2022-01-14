#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[4]={1,2,3,4};
    for (int i = 0; i < 4; i++) {
        sum=sum+arr[i];
        cout<<sum<<endl;
    }
    return 0;
}

i/p
1,2,3,4
o/p
1 3 6 10
