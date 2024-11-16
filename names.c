#include<stdio.h>
void name();
int main(){
name();
return 0;
}
void name(){
    char name[100];
    int i;
    printf("Enter full name : ");
    fgets(name,sizeof(name),stdin);
    for(int i=0;i<10;i++){
        printf("Your full name is %s\n",name);
    }
}