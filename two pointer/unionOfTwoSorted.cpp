#include<iostream>
using namespace std;

int main(){
    int arr1[4]={1,1,2,3},arr2[6]={2,3,3,4,4,5};
    int note=0,index=0,Arr1[4]={0,0,0,0},Arr2[6]={0,0,0,0,0,0};
    for(int i=0;i<4;i++){
        if(note!=arr1[i]){
            Arr1[index]=arr1[i];
            note=arr1[i];
            index=index+1;
        }
    }
    note=0,index=0;
    for(int j=0;j<6;j++){
        if(note!=arr2[j]){
            Arr2[index]=arr2[j];
            note=arr2[j];
            index=index+1;
        }
    }
    int Ans[10]={0,0,0,0,0,0,0,0,0,0},c=0,k=0,l=0;
    while( k<4 &&  l<6){
        if(Arr1[k]==Arr2[l]){
            Ans[c]=Arr1[k];
            k++,l++,c++;
        }
        else if (Arr1[k]>Arr2[l])
        {
            Ans[c]=Arr2[l];
            c++,l++;
        }
        else
        {
            Ans[c]=Arr1[k];
            c++,k++;
        }
    }

    while(k<4){
        Ans[c]=Arr1[k];
        c++,k++;
    }
    while(l<6){
        Ans[c]=Arr2[l];
        c++,l++;
    }

    for(int a=0;a<10;a++){
        cout<<Ans[a]<<" ";
    }
    

    return 0;
}