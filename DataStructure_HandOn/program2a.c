#include<stdio.h>

int main(){

	int arr[6] = {7,4,2,8,9,5};

	for(int olc=0;olc<6-1;olc++){
	
		for(int ilc=0;ilc<(6+1)-olc;ilc++){
		
			if(arr[ilc]>arr[ilc+1]){
			
				int temp = arr[ilc];
				arr[ilc] = arr[ilc+1];
				arr[ilc+1] = temp;
			}
		}
	}

	for(int olc=0;olc<6;olc++){
	
		printf("%d",arr[olc]);
	}
}
