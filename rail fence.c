#include<stdio.h>
int main(){
	int count=0,len=0,rail=0,j=0;
	char str[100],code[100][100];
	printf("Enter depth : ");
	scanf("%d",&rail);
	printf("Enter string : ");
	scanf("%s",&str);
	len=strlen(str);
	while(j<len){
		if(count%2==0){
			int i;
			for(i=0;i<rail;i++){
				code[i][j]=str[j];
				j++;
			}
		}
		else{
			int i;
			for(i=rail-2;i>0;i--){
				code[i][j]=str[j];
				j++;
			}
		}
		count++;
	}
	int i;
	for(i=0;i<rail;i++){
		int j;
		for(j=0;j<len;j++){
			printf("%c",code[i][j]);
		}
	}
}
