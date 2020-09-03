import java.util.Scanner;

public class QuickSort {
	private static void quickSort(int[] arr, int start, int end, boolean isAsc) {

		if (start < end) {
			// find the position of the last element #pivot and then partition
			// the array around the element
			int pivot = partition(arr, start, end, isAsc);
			quickSort(arr, start, pivot - 1, isAsc);
			quickSort(arr, pivot + 1, end, isAsc);
		}
	}

	private static void printMyarray(int arr[]) {
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}

	}

	private static int partition(int arr[], int start, int end, boolean isAsc) {
		int pivot = arr[end]; // last element as pivot
		int i = start - 1; // index of smallser element , initially will be -1

		for (int j = start; j <= end-1; j++) {
			if (arr[j] <= pivot && isAsc) {
				// arr[j] <pivot means pivot's position is towards right
				// increment the smaller index
				i++;
				if (i != j) {
					
					// swap the elements
					int temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
				

			}
			
			if(arr[j]>pivot && !isAsc){
				// arr[j] <pivot means pivot's position is towards right
				// increment the smaller index
				i++;
				if (i != j) {
					
					// swap the elements
					int temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		}

		// place the pivot at right position
		int temp=arr[i+1];
		arr[i+1]=arr[end];
		arr[end]=temp;
		return i + 1;
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
		quickSort(arr, 0, arr.length - 1, true); // sort ascending
		System.out.println("Ascending Array \n");
		printMyarray(arr);
		quickSort(arrCopy, 0, arrCopy.length - 1, false); // sort descending
		System.out.println("\nDescending Array \n");
		printMyarray(arrCopy);
		scanner.close();
	}

}

/*
 * Quick SORT 1. Approach ->Divide & conquer i.) Pick pivot element and
 * partition the array in two -> first elements lower than pivot and second
 * elements higher than pivot ii.) partitioning will give exact position of the
 * element iii) selection of pivot can be done in different ways: a) Last
 * element as pivot b) First element as pivot c) Random element as pivot d)
 * Median as pivot
 * 
 * Time Complexity : O(nLog(n))
 * Worst Case Time Complexity :O(n^2)
 * 
 * Space Complexity : O(n)
 * 
 * Quick SOrt is not a stable sort
 */