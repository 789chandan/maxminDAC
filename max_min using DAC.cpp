// To find the max min using DAC
#include<stdio.h>
int a[100];
int max,min;
// creating function 
void maxmin(int i, int j){
	int mid,max1,min1;
	if(i == j){ // if array has only one element
		max = min = a[i];
	} else 
	{
		if(i == j-1){ // if array has two element
			if(a[i]<a[j]){
				max=a[j];
				min=a[i];
			}else{
				max=a[i];
				min=a[j];
			} 
		}
	
	 else{ // if array has more than two element
	
	mid=(i+j)/2;
	maxmin(i,mid); // function call
	max1=max;
	min1=min;
	maxmin(mid+1 , j); //function call
	if(max<max1)
		max=max1;
	if(min>min1)
		min=min1;
	}
  }
}

   int main(){
	int num,i;
	printf("Enter the Size of an ARRAY:");
	scanf("%d",&num);
	printf("Enter the %d element of an ARRAY:",num);
	for(i=1;i<=num;i++){
		scanf("%d",&a[i]);
	}
	maxmin(1,num);
	printf("MAX is: %d \n",max);
	printf("MIN is: %d",min);
	return 0;
}
