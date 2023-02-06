#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int n=0;
	for(int k=0; k<(100000/100); k++)
	{
		n=n+100;
		int num[n];
		int insert[n];
		int select[n];
		int j, min;
		clock_t start_t, end_t;
	    double total_t;
		printf("%d\t",n);
		for(int i=0; i<n; i++)
		{
			num[i]=rand() % 10;
			insert[i]=num[i];
			select[i]=num[i];
		}
		start_t = clock();
	    for (int i = 1; i < n; i++) 
	    {
	        int a = insert[i];
	        j = i - 1;
	        while (j >= 0 && insert[j] > a) 
	        {
	            insert[j + 1] = insert[j];
	            j = j - 1;
	        }
	        insert[j + 1] = a;
	    }
	    end_t = clock();
		total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
		printf("%f\t", total_t  );
		start_t = clock();
	    for (int i = 0; i < n; i++)
	    {
	        min = i;
	        for (j = i+1; j < n; j++)
	        {
	          if (select[j] < select[min])
	            {
	            	min = j;
	            }
	 		}
	        if(min != i)
	        {
	            int temp=select[i];
	            select[i]=select[min];
	            select[min]=temp;
	        }
	    }
	    end_t = clock();
	    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
		printf("%f\n", total_t  );
	}
}