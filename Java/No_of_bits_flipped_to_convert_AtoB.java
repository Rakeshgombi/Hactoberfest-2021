package bit_manipulation_Algorithms;
import java.io.*;
public class No_of_bits_flipped_to_convert_AtoB {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		int a,b,mask,count=0;
		char c='y';
while(c=='y') 
{BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	System.out.println("enter the the no you want to convert");
	a=Integer.parseInt(br.readLine());
	System.out.println("Enter the no to which you want to convert");
	b=Integer.parseInt(br.readLine());
	mask=a^b;
	while(mask>0)
	{
		mask=mask&(mask-1);
		count++;
	}
	System.out.println("Digits you have to flip is "+count);
	System.out.println("Do you want to continue");
	c=(char)br.read();
}
	}

}
