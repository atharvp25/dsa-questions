#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int>nums={-1, -2, -3, -4, -5};
    int target=-8;
    unordered_map<int,int>map;
    vector<int>solu;
    for(int i=0;i<nums.size();i++){
        map[nums[i]]=i;
    }

    for(int i =0 ;i<nums.size();i++){
        int sub= target-nums[i];

        if(map.find(sub) != map.end() && map[sub] != i){
            solu.push_back(i);
            solu.push_back(map[sub]);
            break;
        }
    
    }
    for(int i=0;i<solu.size();i++){
        cout<<solu[i]<<" ";
    }
}    