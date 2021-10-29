import java.io.*;
import java.util.*;
class Node
{
    int data;
    Node next;

    Node(int x)
    {
        data = x;
        next = null;
    }
}
class Addone
{
    public static void printList(Node node) 
    { 
        while (node != null)
        { 
            System.out.print(node.data);
            node = node.next; 
        }  
        System.out.println();
    } 
    public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String s = sc.next();
                    Node head = new Node( s.charAt(0) - '0' );
                    Node tail = head;
                    for(int i=1; i<s.length(); i++)
                    {
                        tail.next = new Node( s.charAt(i) - '0' );
                        tail = tail.next;
                    }
                    Solution obj = new Solution();
                    head = obj.addOne(head);
                    printList(head); 
                }
        }
}
class Solution
{   
    Node newhead;
    Node first;
    boolean flag=true;
    public Node addOne(Node head) 
    { 
        newhead=null;
        first=head;
        add(head);
        if(newhead!=null)
        return newhead;
        else
        return head;
    }
    public void add(Node node){
        if(node==null) return ;
        add(node.next);
        if(flag==true&&node==first){
          if(node.data+1>9){
             node.data=0;
             newhead=new Node(1);
             newhead.next=node;
          }
          else{
             node.data+=1; 
          }
        }
        else if(flag==true){
          if(node.data+1>9){
             node.data=0;
          }
          else{
             node.data+=1;
             flag=false; 
          }  
        }
    }
}
