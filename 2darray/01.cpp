#include<iostream>
#include<algorithm>
#include<cmath>

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int maxsum=0;
    int idx=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        maxsum=sum;
        if(sum>=maxsum){
            maxsum=sum;
            idx=i;
        }
        
    }
    std::cout<<maxsum<<" "<<idx<<std::endl;
}