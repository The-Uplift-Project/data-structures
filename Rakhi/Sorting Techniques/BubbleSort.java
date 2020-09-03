import java.io.IOException;
import java.util.Scanner;

public class BubbleSort {

	static void bubbleSortAsc(int[] arr) {
		boolean swapped=false;
		System.out.println("\n----- Ascending Array -----\n");
		for (int i = 0; i < arr.length-1 ; i++) {
			swapped=false;
			for (int j = 0; j < arr.length - 1 - i; j++) {
				if (arr[j] > arr[j + 1]) {
					arr[j] = arr[j + 1] + arr[j];
					arr[j + 1] = arr[j] - arr[j + 1];
					arr[j] = arr[j] - arr[j + 1];
					swapped=true;
				}
			}
			
			// break the inner loop if there is no swap
			if(!swapped){
				break;
			}
		}
		
		printMyarray(arr);
	}

	static void bubbleSortDesc(int arr[]) {
		boolean swapped=false;
		System.out.println("\n----- Descending Array -----\n");
		for (int i = 0; i < arr.length -1; i++) {
			swapped=false;
			for (int j = 0; j < arr.length - 1 - i; j++) {
				if (arr[j] < arr[j + 1]) {
					arr[j] = arr[j + 1] + arr[j];
					arr[j + 1] = arr[j] - arr[j + 1];
					arr[j] = arr[j] - arr[j + 1];
					swapped=true;
				}
			}
			// break the inner loop if there is no swap
				if(!swapped){
					break;
				}
		}
		
		printMyarray(arr);
	}

	static void printMyarray(int arr[]) {
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}

	}

	private static final Scanner scanner = new Scanner(System.in);

	public static void main(String[] args) throws IOException {

		String[] arrRowItems = scanner.nextLine().split(" ");
		scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
		int[] arr = new int[arrRowItems.length];
		for (int j = 0; j < arrRowItems.length; j++) {
			int arrItem = Integer.parseInt(arrRowItems[j]);
			arr[j] = arrItem;
		}
		bubbleSortAsc(arr); // sort ascending
		bubbleSortDesc(arr); // sort descending
		
		scanner.close();
	}
}

/*
 * BUBBLE SORT 
 * 1. Approach 
 * i.) swap the adjacent elements if not is order 
 * ii.) for each inner loop we will get a sorted element at last position
 * 
 * Time Complexity : O(n^2)
 * this can be reduced by adding swap flag 
 * Best case is O(n)
 * Worst & average case is O(n^2)
 * 
 * Auxiliary Space Complexity : O(1)
 * when a temp variable is used for swapping
 * without temp variable it is 0 but this wont hold true for larger values of number
 * 
 */
