");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Matris[%d][%d]=", i+1, j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0; i<(n/2); i++)
	{
		for(j=0; j<n/2; j++)
		{
			m1[i][j]=matris[i][j];
			m2[i][j]=matris[i][j+n/2];
		}
	}
	
	/*j=0; k=n/2; t=0; i=n/2;
	while(j<n/2)
	{
		m3[j][t]=matris[i][j];
		m4[j][t]=matris[i][k];
		t++; k++;
		if(t==n/2)
		{
			t=0; j++;
		}
	}
	
	*/
	
	for(i=0; i<n/2; i++)
	{
		for(j=0; j<n/2; j++)
		{
			m3[i][j]=matris[i+n/2][j];
			m4[i][j]=matris[i+n/2][j+n/2];
		}
		
		if(j==n/2-1)
		{
			i++; j=0; }
		else if(j<n/2)
			j++;
		else j=0;
		
	}
	
	ekranaYazdir(m1);
	ekranaYazdir(m2);
	ekranaYazdir(m3);
	ekranaYazdir(m4);
	
	return 0;
}

void ekranaYazdir(int A[][n/2])
{
	for(i=0; i<n/2; i++)
	{
		for(j=0; j<n/2; j++)
			printf("%d\t", A[i][j]);
		printf("\n");
	}
	
	printf("\n");
}
