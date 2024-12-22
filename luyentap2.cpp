#include<stdio.h>
int main(){
	int so;
	int chan=0;
	int le=0;
	printf("nhap 5 so nguyen \n");

	for(int i=1;i<=5;i++){
		scanf("%d",&so);
	
	if(so%2==0){
			chan ++;
		}else{
			le++;
		}
	}
	
	printf("so chan la : %d\n",chan);
	printf("so le la : %d\n",le);
	return 0;
}
