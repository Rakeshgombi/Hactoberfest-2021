import java.util.*;

class bus {
    String pass_name;
    int seatno = 0;
    static int fare = 150;
    static String route_name = "Delhi to Rishikesh";
    static int busno = 102;

    void input(String a, int b) {
        pass_name = a;
        seatno = b;
    }

    void display() {
        if (pass_name != null)
            System.out.println(seatno + "\t\t" + pass_name);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int[] seatcheck = new int[50];
        bus[] s1 = new bus[50];
        for (int i = 0; i < 50; i++)
            s1[i] = new bus();
        bus t = new bus();
        String s = "";
        char ch = ' ';
        int j = 0;
        while (true) {
            System.out.println("\tMAIN MENU\t");
            System.out.println("1. Book seat and display total fare");
            System.out.println("2. Display bus seat status sorted seatno wise");
            System.out.println("3. Check availability of seats");
            System.out.println("4. Exit");
            System.out.println("Enter your choice");
            ch = sc.next().charAt(0);

            switch (ch) {
            case '1':
                int c = 0;
                sc.nextLine();
                System.out.print("Enter pass name: ");
                s = sc.nextLine();
                System.out.print("Enter number of seats you want to book: ");
                int n = sc.nextInt();
                System.out.print("Enter the seat numbers: ");
                for (int i = 0; i < n; i++) {
                    int seat = sc.nextInt();
                    if (seat > 50 || seat <= 0) {
                        System.out.println("Please enter correct seat number and try again.");
                        break;
                    } else if (seatcheck[seat - 1] == 0) {
                        s1[j].input(s, seat);
                        seatcheck[seat - 1]++;
                        j++;
                        c++;
                    } else {
                        System.out.println("Sorry! Seat no." + seat + " is already booked.");
                    }
                }
                    System.out.println("Total Fare: " + (fare * c));
                break;
            case '2':
                for (int i = 0; i < 50; i++) {
                    for (int k = 0; k < 50; k++) {
                        if (s1[i].seatno < s1[k].seatno) {
                            t = s1[i];
                            s1[i] = s1[k];
                            s1[k] = t;
                        }
                    }
                }
                System.out.println("Bus Number: " + busno);
                System.out.println("Route Name: " + route_name);
                System.out.println("SEAT NO." + "\t" + "PASS NAME");
                for (int i = 0; i < 50; i++)
                    s1[i].display();
                break;

            case '3':
                int count = 0;
                for (int i = 0; i < 50; i++) {
                    if (s1[i].seatno == 0)
                        count++;
                }
                if (count > 0)
                    System.out.println("There are " + count + " seats available");
                else
                    System.out.println("No seats available");
                break;

            case '4':
                System.exit(0);
                break;

            default:
                System.out.println("Invalid Choice");
            }
        }
    }
}
