#include<stdio.h>
#include<string.h>
int main(){
	int a,b=0;
	int n;
	char c[100];
	printf("nhap chuoi ki tu : ");
	fgets(c,100,stdin);
	for(int i=0;i<strlen(c)-1;i++){
		if('a'<=c[i]&&c[i]<='z'||'A'<=c[i]&&c[i]<='Z'){
			a++;
		}else{
			if('0'<=c[i]&&c[i]<='9'){
				b++;
			}else{
				n++;	
			}
		}
	}
	printf("so luong chu cai co trong mang la : %d\n",a);
	printf("so luong chu so co trong mang la : %d\n",b);
	printf("so luong ki tu co trong mang la : %d\n",n);
		return 0;
}
