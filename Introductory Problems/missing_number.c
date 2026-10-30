#include <stdio.h>
int main()
{
int num;
int fist_sum=0; 
int second_sum=0;
scanf(" %d",&num);
int num1[num];
for(int i=0;i<=num-2;i++){
scanf(" %d",&num1[i]);
}

for(int j=0;j<=num-2;j++){
fist_sum+=num1[j];
}
for(int c=1;c<=num;c++){
second_sum+=c;

}
printf("\n %d ",second_sum-fist_sum);
}
