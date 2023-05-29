#include<stdio.h>
#include<string.h>


int isPalindrome(int n){
	int reverse=0;
	int tmp=n;
	while (tmp!=0){
		reverse=reverse*10+tmp%10;
		tmp/=10;
		printf("%d\n",tmp);
	}
	return (n==reverse);
}
int main(){
	int largestPalindrome=0;
	int i,j;
	
	for(i=10;i<=99;++i){
		for(j=i;j<=99;++j){
		int product=i*j;
		if (isPalindrome(product) && product > largestPalindrome){
			largestPalindrome=product;
		}
		}
	}
printf("The largest palindrome product of two digits: %d\n", largestPalindrome);
return 0;}
