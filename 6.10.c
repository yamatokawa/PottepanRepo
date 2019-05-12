#include<stdio.h>

#define INT_SWAP {temp=a;a=b;b=temp;}
#define KEISAN {temp=*front;*front=*rear;*rear=temp;}

int mystrlen(const char *input)
{
	char i=0;
	char length=0;
	while(*(input+i)!=0)
	{
		length=length+1;
		i++;	
	}
	return length;
}

void mystrcpy(char *input1,const char *input2)
{
	int loop=0;
	int i=0;
	loop=mystrlen(input2);//input2の文字列の長さをloopに代入
	for(i=0;i<loop;i++)
	{
		*(input1+i)=*(input2+i);
	}
	
}

void reverse2(char *input1,const char *input2)
{
	char i=0;
	char length=0;
	
	length=mystrlen(&input2[0]);
	
	for(i=0;i<length;i++)
	{
		*(input1+i)=*(input2+length-1-i);
	}
}

void reverse1(char *input1)
{
	char i=0;
	char *front;
	char *rear;
	char length=0;
	char temp=0;
	
	length=mystrlen(&input1[0]);
	
	for(i=0;i<length/2;i++)
	{
		front=input1+i;
		rear=input1+length-1-i;
	
		KEISAN;
		/*temp=*front;
		*front=*rear;
		*rear=temp;
		*/
	}
	
}


int main(void)
{
	//unsigned char *word;
	char word[100]={"faafagv"};
	char word2[100]={};
	char word3[100]={};
	char word4[100]={};
	char length=0;
	int i=0;
	
	for(i=0;i<100;i++)
	{
		word4[i]=word[i];
	}
	i=0;
	length=mystrlen(&word[0]);
	
	mystrcpy(&word2[0],&word[0]);
	
	reverse2(&word3[0],&word[0]);
	
	reverse1(&word4[0]);
	
	printf("長さは%dです\n",length);
	
	printf("コピー前の配列は\n");
	while(*(word+i)!=0)
	{
		printf("%c",*(word+i));
		
		i++;
	}
	printf("\n");
	
	i=0;
	printf("コピー後の配列は\n");
	while(*(word2+i)!=0)
	{
		printf("%c",*(word2+i));
		
		i++;
	}
	printf("\n");
	i=0;
	printf("文字反転後の配列は\n");
	while(*(word3+i)!=0)
	{
		printf("%c",*(word3+i));
		
		i++;
	}
	printf("\n");
	
	i=0;
	printf("文字反転後の配列は\n");
	while(*(word4+i)!=0)
	{
		printf("%c",*(word4+i));
		
		i++;
	}
	
	
	return 0;

}
