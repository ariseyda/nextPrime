#include<stdio.h>

//Write the function nextPrime that receives an integer and returns the smallest prime number that is larger than the entered integer. 
//Use the function in a program that receives number of prime numbers and displays first that many prime numbers. 

int nextPrime(int n){
	
  int count=0;
  int a=n+1;
  int i,j;
  
  for(i=2;i<a;i++){
  	if(a%i==0){
  		count++;
  		a++;
	  }
	else{
		continue;
	}
  }
  if(count==0){
  	return a;
  }
  
}
int main(){
	

	int i,b;

	
	printf("Please enter an integer:");
	scanf("%d",&b);
	
   int a=b-1;
    while(a>1){
    	for(i=2;i<a;i++){
    		if(a%i==0){
    			a--;
			}
			
		}
		printf("%d\n",a);
		a--;
	}

	printf("Next prime:%d",nextPrime(b));
	
	return 0;
}

