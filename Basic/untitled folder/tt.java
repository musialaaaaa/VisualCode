import java.util.Scanner; 

 

public class tt { 

    public static void main(String[] args) { 

        Scanner scanner = new Scanner(System.in); 

        String repeat; 

 

        do { 

            // Input taxable income 

            System.out.print("Enter your taxable income: "); 

            while (!scanner.hasNextDouble()) { 

                System.out.println("Please enter a valid number."); 

                scanner.next(); // Clear invalid input 

            } 

            double taxableIncome = scanner.nextDouble(); 

            double tax = calculateTax(taxableIncome); 

             

            // Display the calculated tax 

            System.out.printf("Your income tax is: $%.2f%n", tax); 

 

            // Ask user if they want to calculate again 

            System.out.print("Do you want to calculate again? (yes/no): "); 

            repeat = scanner.next(); 

        } while (repeat.equalsIgnoreCase("yes")); 

 

        System.out.println("Thank you for using the Income Tax Calculator!"); 

        scanner.close(); 

    } 

 

    public static double calculateTax(double income) { 

        double tax = 0.0; 

 

        // Example tax brackets 

        if (income <= 9875) { 

            tax = income * 0.10; 

        } else if (income <= 40125) { 

            tax = 9875 * 0.10 + (income - 9875) * 0.12; 

        } else if (income <= 85525) { 

            tax = 9875 * 0.10 + (40125 - 9875) * 0.12 + (income - 40125) * 0.22; 

        } else { 

            tax = 9875 * 0.10 + (40125 - 9875) * 0.12 + (85525 - 40125) * 0.22 + (income - 85525) * 0.24; 

        } 

 

        return tax; 

    } 

} 