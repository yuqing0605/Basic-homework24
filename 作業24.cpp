#include <stdio.h>
#include <stdlib.h>

struct course

{
	char name[10];  
	int calculus;
	int computer;
	int programming;
} p;

int main(void)
{
	int i;
    FILE *pFile;
	printf("Ū�����e���G\n");
	pFile=fopen("one.txt", "r");

    if (pFile==NULL)
    {
        printf("�ɮ׶}�ҥ���!!\n");
        exit(1);
	}   
	
    else
    {
		for(i=0;i<7;i++){
			fscanf(pFile,"%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.programming);
			printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.programming); 
		}    
	}
	
	printf("\n");
    fclose(pFile);
    system("pause");
    return 0;
}
