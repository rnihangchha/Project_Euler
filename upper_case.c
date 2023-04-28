//LOwer to upper case 
#include<stdio.h>

#include<string.h>

int main(){
int i;
char str[90];
int st;
printf("Enter one word which contain lower case: ");
scanf("%s",&str);

for(i=0;i<=strlen(str);i++){
	if(str[i]>=90 && str[i]<=126){
		str[i]-=32;
}}
printf("uppercase of the string is : %s",str);
return 0;
}
