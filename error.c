#include<stdio.h>
void main(){
    int time;
    printf("enter the time\n");
    scanf("%d",&time);
    printf("you have entered %d as you time\n",time);
if (time > 20) {
  printf("Good day.");}
  else if (time > 10) {
  
    printf("good morning.");
  }
   else {
  printf("Good evening.");

}
}