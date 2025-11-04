#include <stdio.h>
int main(){
	int arr[]={2,4,6,8,10};
    int n= sizeof(arr)/sizeof(arr[0]);

	int x;
	int found=0;
	printf("nhap x: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			printf("%d",i);
			found=1;
		break;
	}
		

}
if(found==0)
printf("khong tim thay %d ",x);
	return 0;
}
