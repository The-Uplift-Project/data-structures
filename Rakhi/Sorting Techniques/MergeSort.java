import java.util.Scanner;

public class MergeSort {
	private static void mergeAsc(int arr[], int start, int mid, int end) {
		// calculate length of subarrays

		int subArrLen1 = mid - start + 1;
		int subArrLen2 = end - mid;

		// create the sub Arrays as temporary storage
		int subArray1[] = new int[subArrLen1];
		int subArray2[] = new int[subArrLen2];

		// copy data in temporary arrays

		for (int i = 0; i < subArrLen1; i++) {
			subArray1[i] = arr[start + i];
		}

		for (int i = 0; i < subArrLen2; i++) {
			subArray2[i] = arr[mid + i + 1];
		}

		// merging the temporary arrays

		int i = 0, j = 0;
		int k = start;

		while (i < subArrLen1 && j < subArrLen2) {
			if (subArray1[i] <= subArray2[j]) {
				arr[k] = subArray1[i];
				i++;
			} else {
				arr[k] = subArray2[j];
				j++;
			}
			k++;

		}

		// copy left over elements of subArray2[]
		while (i < subArrLen1) {
			arr[k] = subArray1[i];
			i++;
			k++;
		}

		// copy left over elements of subArray2[]
		while (j < subArrLen2) {
			arr[k] = subArray2[j];
			j++;
			k++;
		}

	}

	private static void mergeSort(int arr[], int start, int end, boolean isAsc) {
		if (start < end) {
			// find mid and divide array for sorting till we get single element
			// at the end
			int mid = (start + end) / 2;
			mergeSort(arr, start, mid,isAsc);
			mergeSort(arr, mid + 1, end,isAsc);
			if (isAsc) {
				mergeAsc(arr, start, mid, end);
			}else{
				mergeDesc(arr, start, mid, end);
			}
		}

	}

	private static void mergeDesc(int arr[], int start,int mid, int end) {
		// calculate length of subarrays

				int subArrLen1 = mid - start + 1;
				int subArrLen2 = end - mid;

				// create the sub Arrays as temporary storage
				int subArray1[] = new int[subArrLen1];
				int subArray2[] = new int[subArrLen2];

				// copy data in temporary arrays

				for (int i = 0; i < subArrLen1; i++) {
					subArray1[i] = arr[start + i];
				}

				for (int i = 0; i < subArrLen2; i++) {
					subArray2[i] = arr[mid + i + 1];
				}

				// merging the temporary arrays

				int i = 0, j = 0;
				int k = start;

				while (i < subArrLen1 && j < subArrLen2) {
					if (subArray1[i] > subArray2[j]) {
						arr[k] = subArray1[i];
						i++;
					} else {
						arr[k] = subArray2[j];
						j++;
					}
					k++;

				}

				// copy left over elements of subArray2[]
				while (i < subArrLen1) {
					arr[k] = subArray1[i];
					i++;
					k++;
				}

				// copy left over elements of subArray2[]
				while (j < subArrLen2) {
					arr[k] = subArray2[j];
					j++;
					k++;
				}

	}

	private static void printMyarray(int arr[]) {
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}

	}

	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Please enter space separated array to sort array with merge sort: \n"); 
		String[] arrRowItems = scanner.nextLine().split(" ");
		scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
		int[] arr = new int[arrRowItems.length];
		for (int j = 0; j < arrRowItems.length; j++) {
			int arrItem = Integer.parseInt(arrRowItems[j]);
			arr[j] = arrItem;
		}
		int arrCopy[] = arr;
		mergeSort(arr, 0, arr.length - 1,true); // sort ascending 
		System.out.println("Ascending Array \n");
		printMyarray(arr);
		mergeSort(arrCopy, 0, arrCopy.length - 1,false); // sort descending
		System.out.println("\nDescending Array \n");
		printMyarray(arrCopy);
		scanner.close();
	}
	/*
	 * MERGE SORT 
	 * 1. Approach ->Divide & conquer 
	 * i.) divide array in to two parts till only single element exists  in sub-array
	 * ii.) merge the sorted sub-arrays based on the elements comparison
	 * 
	 * Time Complexity : O(nLog(n))
	 * 
	 * Space Complexity : O(n)
	 * 	 
	 *  Merge Sort is stable as it does not change the position of equal array elements
	 */
}
