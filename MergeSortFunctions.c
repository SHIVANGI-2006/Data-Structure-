void display(int arr[15], int n) 
		{
			left[i] = arr[low + i];
		}
	for(int j = 0; j < n2; j++)
		{
			right[j] = arr[mid + 1 + j];
		}

	int i = 0, j = 0, k = low;
	while(i < n1 && j < n2)
		{
			if(left[i] <= right[j])
			{
				arr[k] = left[i];
				i++;
			}
			else
			{
				arr[k] = right[j];
				j++;
			}
			k++;
		}

	while(i < n1)
		{
			arr[k] = left[i];
			i++;
			k++;
		}

	while(j < n2)
		{
			arr[k] = right[j];
			j++;
			k++;
		}
}

void splitAndMerge(int arr[15], int low, int high) 
{
	if(low < high)
	{
		int mid = low + (high - low)/2;

		splitAndMerge(arr, low, mid);
		splitAndMerge(arr, mid+1, high);

		merge(arr, low, mid, high);
	}
}
