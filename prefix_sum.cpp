#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr={2,4,1,3,5};
    vector<int>prefix_sum(arr.size());
    prefix_sum[0]=arr[0];

    for(int i=1;i<arr.size();i++){
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }

    for(int i=0;i<prefix_sum.size();i++){
        cout<<prefix_sum[i]<<" ";
    }
}
