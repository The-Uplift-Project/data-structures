/** this program displays the left rotated array */



import java.util.*;

class RotateLeft {

    public static void main(String[] args) {
        
        // taking input for size of array
        Scanner scanner = new Scanner(System.in);
        System.out.print(" give the no of element :");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        
        // taking input for no of rotation
        System.out.println(" times by array to be rotated : ");
        int b = scanner.nextInt();
        System.out.println(" enter the elements : ");
        
        // taking input of elements of array
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        // Displays original array
        System.out.println("Original array: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        // Rotate the given array by b times toward left
        for (int i = 0; i < b; i++) {
            int j, first;
            // Stores the first element of the array
            first = arr[0];

            for (j = 0; j < arr.length - 1; j++) {
                // Shift element of array by one
                arr[j] = arr[j + 1];
            }
            // First element of array will be added to the end
            arr[j] = first;
        }

        System.out.println();

        // Displays resulting array after rotation
        System.out.println("Array after left rotation: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
