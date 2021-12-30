int isPrime(int a){
	usleep(20000);
	
if(a == 1){
	printf("number is not prime\n");
   return 0;
         
}
for(int i = 2; i * i <= a; i ++){

if(a%i == 0){
	printf("number %d is not prime\n",a);
return 0;
}
}
printf("number %d is prime!\n",a);
return 1;
}

int isPerfect(int a){
	usleep(20000);
	
	int sum = 0;
	for(int i = 1; i <= a/2; i++){

             if(a%i == 0){
                sum +=i;
	     }
	}
	if(sum == a){
		printf("number %d is perfect!\n",a);
		return 1;
	}
	else{
	 printf("number %d is not  perfect\n",a);
	 return 0;
	}
}
int isPalindrom(int a){
	usleep(20000);
	
int n = a;
int num = 0;
while(n!=0){
num += n%10;
n/=10;
num*=10;
}
num/=10;
if(num == a){
printf("number %d is palindrom!\n",a);
return 1;
}
else{
printf("number %d us not palindrom\n",a);
return 0;
}
}
