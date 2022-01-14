#include <iostream>

using namespace std;

int main(){
    int array[4]={1,2,3,4};
    int array2[4]={1,2,3,4};
    int m=sizeof(array)/ sizeof(array[0]);
    int n=sizeof (array2)/sizeof (array2[0]);
    int concate[m+n];

    for (int i = 0; i < m+n; i++) {
        if (i < m) {
            concate[i] = array[i];
        } else {
            concate[i] = array2[i - m];
        }
    }
        for (int i = 0; i< m+n; i++) {
            cout<<concate[i];
        }


    return 0;
}
