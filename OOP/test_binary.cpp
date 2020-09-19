#include <stdio.h>
#include <iostream>
using namespace std;
 
int main()
{
	
	FILE *f;  
	f=fopen("test_binary.dat","wb");  
	if (f!=NULL)  
	{  
		double d=0;   
		int i=0;   
		long l=51;  
		// fwrite(&d,sizeof(double),1,f);   	
		// fwrite(&i,sizeof(int),1,f);   	
		// fwrite(&l,sizeof(long),1,f);   	
		/* Doc tu tap tin*/   	
		rewind(f);   	
		fread(&d,sizeof(double),1,f);   	
		fread(&i,sizeof(int),1,f);   	
		fread(&l,sizeof(long),1,f);  
		printf("Cac ket qua la: %f %d %ld",d,i,l);   	
		fclose(f);  
	} 
	else 
	{ 
		printf("Khong mo duoc file"); 
	}  
    cout << endl;
	// system("pause");
 
}