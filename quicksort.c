#include <stdio.h>

void showResult(int arr[]){
    for(int i=0;i<10;i++){
        printf("%d     ",arr[i]);
    }
}

void sort(int arr[], int low, int high){
    int i,j,x=arr[5],flag1,flag2;   //arr[middle element]
    if(arr[i]>x){
        flag1=arr[i];
    }else{
        i++;
        flag1=0.1;
    }
    if (arr[j]<x)
    {
        flag2=arr[j];
    }else{
        j--;
        flag2=0.1;
    }
    
    if(flag1 !=0.1){
        if(flag2 !=0.1){
            arr[i] = flag2;
            arr[j] = flag1;
        }else{
            if(arr[j]==x){
                arr[i]=x;
                arr[j]=flag1;
            }
        }
    }else{
        if(arr[i]==x){
            arr[i]=flag2;
            arr[j]=x;
        }
    }
    if(flag1==0.1 && flag2==0.1){
        //break into two sets
    }
    showResult(arr);
}

int main(){
    int elem, arr[10]={33,37,9,47,35,24,12,0,19,20};
    sort(arr, 0, 10);
    return 0;
}