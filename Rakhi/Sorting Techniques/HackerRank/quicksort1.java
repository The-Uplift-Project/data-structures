import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the quickSort function below.
    static int[] quickSort(int[] arr) {
        quickSortRecurssion(arr,0,arr.length-1);
        return arr;
    }
    static void quickSortRecurssion(int[] arr, int start, int end){
        if (start < end) {
            // find the position of the last element #pivot and then partition
            // the array around the element
            int pivot = partition(arr, start, end);
            quickSortRecurssion(arr, start, pivot - 1);
            quickSortRecurssion(arr, pivot + 1, end);
        }
    }
        private static int partition(int arr[], int start, int end) {
        int pivot = arr[end]; // last element as pivot
        int i = start - 1; // index of smallser element , initially will be -1

        for (int j = start; j <= end-1; j++) {
            if (arr[j] <= pivot ) {
                // arr[j] <pivot means pivot's position is towards right
                // greater the smaller index
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

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] arr = new int[n];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        int[] result = quickSort(arr );

        for (int i = 0; i < result.length; i++) {
            bufferedWriter.write(String.valueOf(result[i]));

            if (i != result.length - 1) {
                bufferedWriter.write(" ");
            }
        }

        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
