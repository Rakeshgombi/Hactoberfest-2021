import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class WrapperDemo
{
public static void main(String args[]) throws IOException
{
Float I = new Float(0);
double a = 0.0d;
float i = 0.0f;
int y = 0;
String str;
InputStreamReader isr = new InputStreamReader(System.in);
BufferedReader br = new BufferedReader(isr);
System.out.println("Enter the Principal Amount");
str = br.readLine();
a = Double.parseDouble(str);
System.out.println("Enter the Interest Rate");
str = br.readLine();
I = Float.valueOf(str);
i = I.floatValue();
System.out.println("Enter the Number Of Years");
String sy = br.readLine();
y = Integer.parseInt(sy);
double value = loan(a, i, y);
System.out.println("Final Value is:" + value);
}
static double loan(double a, float i, int y)
{
double sum;
sum=a+(a*y*i)/100;
return sum;
}
}
