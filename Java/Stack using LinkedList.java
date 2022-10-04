public class Main {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
            next = null;
        }
    }
    static class Stack {
        public static Node head = null;

        public static void pushFunction(int data) {
            Node newNode = new Node(data);
            if (head == null) {
                head = newNode;
                return;
            }
            newNode.next = head;
            head = newNode;
        }

        public static boolean Empty() {
            return head == null;
        }

        public static int popFunction() {
            if (Empty()) {
                return -1;
            }
            Node topElem = head;
            head = head.next;
            return topElem.data;
        }

        public static int peekFunction() {
            if (Empty()) {
                return -1;
            }
            Node topElem = head;
            return topElem.data;
        }
    }
        public static void main(String args[]){
            Stack st = new Stack();
            st.pushFunction (1);
            st.pushFunction (2);
            st.pushFunction (3);
            st.pushFunction (4);
            while(!st.Empty()){
                System.out.println(st.peekFunction());
                st.popFunction();
        }
    }
}