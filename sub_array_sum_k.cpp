#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>arr={1,2,3};
    unordered_map<int,int>map;
    int n=arr.size();
    int count=0;
    vector<int>pre_fix(n);
    
    pre_fix[0]=arr[0];    
    int k=3;
    for(int i=1;i<n;i++){
        pre_fix[i]=pre_fix[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        if(pre_fix[i]==k){
            count++;
        }
        int num=pre_fix[i]-k;
        if(map.find(num)!=map.end()){
            count += map[num];
        }
        if(map.find(pre_fix[i])==map.end()){
           map[pre_fix[i]]=0;

        }
        map[pre_fix[i]]++;
    }
    cout<<count;
    
   
}
