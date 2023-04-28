#include<stdio.h>
#include<string.h>

int main(){
int i;
char string[40];
printf("Enter upper case one word:");
scanf("%s",&string);

for(i=0;i<=strlen(string);i++){
	if(string[i]>=65 && string[i]<=126){
		string[i]+=32;
	}
}
printf("the lower case of is :%s",string);

return 0;
}

