interface Constants
{
final static double pi = 3.142;
final static double radius = 6.5;
}
interface Methods extends Constants
{
void compute();
void display();
}
class Circle implements Methods
{
private double area, perimeter;
public void compute()
{
area = pi * radius * radius;
perimeter = 2 * pi * radius;
}
public void display()
{
System.out.println("Area = " + area);
System.out.println("Perimeter = " + perimeter);
}
}
class InterfaceExtendsDemo
{
public static void main(String args[])
{
Circle c = new Circle();
c.compute();
c.display();
}
}