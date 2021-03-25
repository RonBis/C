#include <stdio.h>

char* createHex(int num){
    char hex[50];
    int r,i=0;
    while(num>0){
        r=num%16;
        if(r>=10){
            if(r==10)
                hex[i]='A';
            else if(r==11)
                hex[i]='B';
            else if(r==12)
                hex[i]='C';
            else if(r==13)
                hex[i]='D';
            else if(r==14)
                hex[i]='E';
            else if(r==15) 
                hex[i]='F';
        }
        else{
            hex[i]=r;
        }
        printf("%c",hex[i]);
        i++;
        num/=16;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",hex[j]);
    }
}

int convert(int num, int base){
    int no=0,revno=0,r,count=0;
    if(base == 16){
        createHex(num);
    }
    while(num>0){
        r=num%base;
        no=no*10+r;
        num/=base;
        count++;
    }
    printf("%d",count);
    while(no>0 || (--count)>1){
        r=no%10;
        revno=revno*10+r;
        no/=10;
    }
    return revno;
}

int main(){
    int num,r,bin=0,ch;
    printf("Enter a decimal no : ");
    scanf("%d", &num);
    printf("Which base do you wanna convert [2,8,16] ? ");
    scanf("%d",&ch);
    printf("\n%d in base %d is %d\n",num,ch,convert(num, ch));
    return 0;
}