import java.util.Scanner;


public class SpanOfArray {

	public static void main(String[] args) {

		Scanner scn = new Scanner(System.in);

		int tc = scn.nextInt();

		int arr[] = new int[tc];

		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;

		for (int i = 0; i < arr.length; i++) {
			 arr[i] = scn.nextInt();

			 if(arr[i]>max)
			 {
				 max = arr[i];
			 }

			 if(arr[i]<min)
			 {
				 min = arr[i];
			 }
		}

		System.out.println(max-min);


	}
	public class spanofArray {
	public static void main(String[] args) {
	System.out.println("enter number of elements");
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	System.out.println("enter elements");
	int []a=new int[n];
	for(int i=0;i<n;i++){
	a[i]=sc.nextInt();}
	System.out.print(display(a,n));
	}

	public static int display(int[] x,int n)
	{
	int gap=0,max=0;
	for(int i=0;i<n;i++)
	{
	for(int j=i+1;j<n;j++)
	{
	if(x[i]==x[j])
	{
	gap=j;
	}
	}
	if(gap-i>max)
	max=gap-i;

	}
	System.out.println("largest span in an array  of size :"+n);
	return max+1;
	}

	}


}
