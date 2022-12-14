#include<stdio.h>
int main(){
    char str[]={'1','2','3','4','5'};
    char *ptr =str;
    unsigned temp;
    for(int i=0;i<5;i++){
        temp=ptr;
        if(temp%2==0){
            char ch;
            int x=str[i]-'0';
            x=x+5;
            if(x>9){
                x=x%10;
            }
           ch=x+'0';
           str[i]=ch;
        }
        ptr++;
    }
    for(int i=0;i<5;i++){
        printf("\n%c",str[i]);
    }
    return 0;
}