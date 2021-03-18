#include <stdio.h>
#include <time.h>

void showArr(int arr[]){
    for(int i=0;i<10;i++){
        printf("%d   ",arr[i]);
    }
}

void sort(int arr[], int r){
    int flag1, flag2, t, i, j;
    showArr(arr);
    i=0,j=9;
    while(i<r){
        if(arr[i]>r){
            flag1=i;
            printf("\nflag1 = %d",flag1);
            sleep(1);
            while(j>4){
                if(arr[j]<r){
                    flag2=j;
                    printf("\nflag2 = %d\n\n",flag2);
                    sleep(1);
                    t=arr[flag2];
                    arr[flag2]=arr[flag1];
                    arr[flag1]=t;
                    showArr(arr);
                    break;
                }
                else{
                    j--;
                }
            }
        }
        else{
            i++;
        }
        if(flag1==NULL && flag2!=NULL){
            t=arr[flag2];
            r=arr[flag1];
            arr[flag1]=t;
        }
        if(flag1!=NULL && flag2==NULL){
            t=arr[flag2];
            r=arr[flag1];
            arr[flag1]=t;
        }
    }
    sort(arr, r);
}

int main(){
    int arr[10]={33,37,9,78,45,56,23,6,90,12},i,j,r=arr[4],t;
    sort(arr,r);
    return 0;
}