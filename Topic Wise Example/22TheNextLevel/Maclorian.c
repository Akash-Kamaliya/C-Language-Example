#include<stdio.h>
int form(int,int,int);
void main(){
    int j,x,i;
    scanf("%d %d",&x,&i);
    j=form(x,i,1);
    printf("%d",j);
}
int form(int x,int i,int j){
    int l=1,o=1,n=1;
    if(j==i){
        for(int k=1;k<=j;k++){
            l=l*x;
        }
        for(int k=j;k!=0;k--){
            o=o*k;
        }
        printf("EXECUTTED ::::: FINAL :::  %d\n",(int)(l/o));
        return (int)(l/o);
    }else{
        if(j%2==0){
            n=1;
        }else{
            n=-1;
        }
        for(int k=1;k<=j;k++){
            l=l*x;
        }
        for(int k=j;k!=0;k--){
            o=o*k;
        }
        printf("EXECUTTED ::::: %d\n",(int)(l/o));
        return ((int)(l/o))+(n*form(x,i,(j+1)));
    }
}