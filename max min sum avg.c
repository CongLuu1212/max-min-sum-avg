#include <stdio.h>

void main(){
	int i, min, max, sum, avg;
	int arr[5];
for(i = 0; i < 5; i++) {
		printf("\n nhap so thu %d :",i + 1);
		scanf("%d",& arr[i]);
}
for(i = 0, min = arr[0], max = arr[0]; i < 5; i++) {

	if(min > arr[i]) {
	   min = arr[i]; }
	else if(max < arr[i]) {
		(max = arr[i]);}
	sum += arr[i];
	avg = sum/5;  
}
	printf("\n Max : %d",max);
	printf("\n Min : %d",min);
	printf("\n Sum : %d",sum);
	printf("\n Avg : %d",avg);
	printf("\n arr :");
for(i = 4; i >= 0;) {
	printf("%d, ",arr[i]);
	i--;
	}
}
