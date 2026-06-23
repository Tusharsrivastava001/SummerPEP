#include<iostream>

int main(){
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==n || j==1 || j==n) std::cout<<"*";
            else std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}