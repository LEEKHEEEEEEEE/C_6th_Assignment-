#include <stdio.h>
int main(){
int i=0;
char ch;
while((ch=getchar())!=EOF){
for(i=0;i<ch-48;i++){
printf("%d",ch-48);
}}
return 0;
}