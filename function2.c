#include<stdio.h>
int fun(int x,int y){
    printf("start fun\n");
    return x+y;
    printf("end main\n");
    
}
int main(){
    printf("start main\n");
   int retval= fun(10,20);
    printf("%d\n",retval);
    printf("end main\n");
}