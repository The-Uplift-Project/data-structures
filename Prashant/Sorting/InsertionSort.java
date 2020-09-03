
/** this program shows the implementation of insertion sort */
import java.io.IOException;
import java.util.Scanner;

public class InsertionSort {
    public static void insertionSort(int array[]) {
        int n = array.length;
        for (int j = 1; j < n; j++) {
            int key = array[j];
            int i = j - 1;
            while ((i > -1) && (array[i] > key)) {
                array[i + 1] = array[i];
                i--;
            }
            array[i + 1] = key;
        }
    }

    public static void main(String a[]) {
        int[] arr1 = { 9, 14, 3, 2, 43, 11, 58, 22 };
        System.out.println("Before Insertion Sort");
        for (int i : arr1) {
            System.out.print(i + " ");
        }
        System.out.println();

        insertionSort(arr1);// sorting array using insertion sort

        System.out.println("After Insertion Sort");
        for (int i : arr1) {
            System.out.print(i + " ");
        }
    }
}

// Worst Case Time Complexity [ Big-O ]: O(n2)

// Best Case Time Complexity [Big-omega]: O(n)

// Average Time Complexity [Big-theta]: O(n2)

// Space Complexity: O(1)
