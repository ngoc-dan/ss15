#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	printf("nhap chuoi ki tu : ");
	fgets(c,100,stdin);
	if('a'<=c[0]&&c[0]<='z'){
		c[0]=c[0]-32;
	}	
	for(int i=0;i<strlen(c);i++){
    	if(c[i]==' '){
    		if('a'<=c[i+1]&&c[i+1]<='z'){
    			c[i+1]=c[i+1]-32;
			}
		}
	}
	printf("chuoi ky tu la : %s",c);
	return 0;
}
