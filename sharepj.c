#include<stdio.h>

int main(){
	for (int i=2;i<20;i++)
	{
		for (int j=2;j<=i;j++)
		{
			if( i % j == 0 )
			{
				if( i == j )
					printf("ans : %d\n",i);
				else break;
			}
		}
	}
	return 0;
}
