#include<iostream>
using namespace std;

int main(){
    int nums[]={3,5,1,9,3450,12,14,56,18,0};
    int size=sizeof(nums)/sizeof(nums[0]);
    int smallest=INT16_MAX;
    int greatest=INT16_MIN;

    for(int i=0;i<size;i++){
        // if(nums[i]<smallest){
        //     smallest=nums[i];
        // }
        smallest=min(nums[i],smallest);
        greatest=max(nums[i],greatest);
    }    
    cout<<"your smallest number is:"<<smallest<<endl;
    cout<<"your greatest number is:"<<greatest;
}