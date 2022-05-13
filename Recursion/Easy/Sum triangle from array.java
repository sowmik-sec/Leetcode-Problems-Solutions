import java.util.Scanner;

public class SumTriangleFromArray {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        func(arr);
    }

    private static void func(int[] arr) {
        if(arr.length==0) {
            return;
        }
        int[] temp = new int[arr.length-1];
        for (int j = 1,i=0; j < arr.length; j++,i++) {
            temp[i] = arr[j]+arr[j-1];
        }
        func(temp);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
