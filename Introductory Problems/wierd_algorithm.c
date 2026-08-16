#include <stdio.h>
#include <stdbool.h>
int main()
{
long long int num;
scanf("%lld",&num);
while(true){
printf("%lld ",num);
if(num==1){break;}
else if(num%2==0){num/=2;}
else{ num=num*3+1;}

}

}
