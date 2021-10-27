interface Area
{
final static float pi = 3.142F;
float compute(float x, float y);
}
class Rectangle implements Area
{
public float compute(float x, float y)
{
return (pi * x * y);
}
}
class Circle implements Area
{
public float compute(float x, float y)
{
return (pi * x * x);
}
}
class InterfaceImplementsDemo
{
public static void main(String a[])
{
Rectangle rect = new Rectangle();
Circle cir = new Circle();
Area A;
A = rect;
System.out.println("Area of Rectangle = " + A.compute(10, 20));
A = cir;
System.out.println("Area of Circle = " + A.compute(30, 0));
}
}