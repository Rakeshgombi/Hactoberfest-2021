import java.util.Scanner;

class Fibonacci {
    public static void main(String args[]) {
        int i, n, sum, r = 0, t = 1;
        Scanner a = new Scanner(System.in);
        System.out.println("Enter no. of Elements :");
        n = a.nextInt();
        a.close();
        for (i = 0; i <= n; i++) {
            System.out.print(r + " + ");
            sum = r + t;
            r = t;
            t = sum;
        }
    }
}