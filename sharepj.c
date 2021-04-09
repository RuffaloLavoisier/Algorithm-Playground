#include<stdio.h>

int main(){
	int enable =  0;
	for (int i = 2; i < 20; i++)
	{
		for (int j=2;j<=i/2;j++)//point
		{
			if( i % j == 0 )
			{
				enable = 1;
				break;
				//				if( i == j )
				//					printf("ans : %d\n",i);
				//				else break;
			}
		}
		if(enable == 0 ){//no have
			printf("%d\n", i);
		}
		enable = 0;
	}
	return 0;
}
