import java.util.Vector;
class VectorDemo
{
public static void main(String arg[])
{
Vector<String> v = new Vector<String>();
v.addElement("Delhi");
v.addElement("Bombay");
v.addElement("Chennai");
v.insertElementAt("Bangalore", 0);
v.insertElementAt("Hyderabad", 3);
v.insertElementAt("Mysore", 5);
System.out.println("Vector Size :" + v.size());
System.out.println("Vector Capacity :" + v.capacity());
System.out.println("The elements of a vector are :");
for (int i = 0; i < v.size(); i++)
{
System.out.println(v.elementAt(i));
}
System.out.println();
System.out.println("The first element is : " + v.firstElement());
System.out.println("The last element is : " + v.lastElement());
System.out.println("The object Hyderabad is found at position : "
+ v.indexOf("Hyderabad"));
v.removeElement("Hyderabad");
v.removeElementAt(1);
System.out.println("After removing 2 elements ");
System.out.println("Vector Size :" + v.size());
System.out.println("Vector Capacity :" + v.capacity());
System.out.println("The elements of vector are :");
for (int i = 0; i < v.size(); i++)
{
System.out.println(v.elementAt(i));
}
}
}