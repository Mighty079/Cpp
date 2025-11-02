#include<bits/stdc++.h>
using namespace std;

int pattern1(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<"*\t";
        }
cout<<endl;
    }
}
int pattern2(){
    int i,j;
    for(i=1;i<4;i++){
        for(j=1;j<=i;j++){
            cout<<i<<"  ";
        }
cout<<endl;
    }
}
int pattern3(){
    int i,j,num=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<10*num<<"  ";
            num++;
        }
cout<<endl;
    }
}
int pattern4(){
    int i,j,num=1;
    for(i=0;i<4;i++){
        for(j=0;j<i+1;j++){
            cout<<num<<"  ";
            num++;
        }
cout<<endl;
    }
}
int main(){
    
    pattern4();
  
}