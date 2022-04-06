//Maximum of all subarrays of size k


void checkMax(int x, int y, int max)
{

}

int PrintMax(int a[], int n, int k)
{
	int i = 0, j = 0;
	int max;
	while (j<n)
	{
		checkMax(a[i], a[j], max);
		if (j - i + 1 < k)
		{
			j ++ ;
		}
		else if (j-i+1==k)
		{
			//print max
			i++;
			j++;
		}
	}
}