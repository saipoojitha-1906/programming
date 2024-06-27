#include<stdio.h>
int main(){
	int n,i,e,p=0,untreated=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&e);
		if(e==-1){
			if(p>0){
				p--;
			}
			else{
				untreated=untreated+1;
			}
		}
		else{
			p+=e;
		}
	}
	printf("%d",untreated);
}
