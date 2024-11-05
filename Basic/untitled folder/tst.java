import java.util.HashSet; 

import java.util.Scanner; 

import java.util.Set; 

 

public class tst{ 

 

    private static final Set<String> cbdPostalCodes = new HashSet<>(); 

 

    static { 

        // Populate CBD postal codes into a Set for efficient lookup 

        cbdPostalCodes.add("01"); 

        cbdPostalCodes.add("02"); 

        cbdPostalCodes.add("03"); 

        cbdPostalCodes.add("04"); 

        cbdPostalCodes.add("05"); 

        cbdPostalCodes.add("06"); 

        cbdPostalCodes.add("07"); 

        cbdPostalCodes.add("08"); 

        cbdPostalCodes.add("17"); 

        cbdPostalCodes.add("18"); 

        cbdPostalCodes.add("19"); 

        cbdPostalCodes.add("22"); 

        cbdPostalCodes.add("23"); 

    } 

 

    public static void main(String[] args) { 

        Scanner scanner = new Scanner(System.in); 

        String response; 

 

        do { 

            // Get postal codes with validation 

            String pickupPostalCode; 

            do { 

                System.out.print("Enter the pickup postal code (2 digits): "); 

                pickupPostalCode = scanner.nextLine(); 

            } while (!isValidPostalCode(pickupPostalCode)); 

 

            String deliveryPostalCode; 

            do { 

                System.out.print("Enter the delivery postal code (2 digits): "); 

                deliveryPostalCode = scanner.nextLine(); 

            } while (!isValidPostalCode(deliveryPostalCode)); 

 

            // Determine zones and calculate delivery charge 

            int deliveryCharge = calculateDeliveryCharge(pickupPostalCode, deliveryPostalCode); 

 

            // Display delivery charge 

            System.out.println("The delivery charge is: " + deliveryCharge + " SGD"); 

 

            // Ask if the user wants to continue 

            do { 

                System.out.print("Do you want to calculate another delivery? (Yes/No): "); 

                response = scanner.nextLine(); 

            } while (!response.equalsIgnoreCase("Yes") && !response.equalsIgnoreCase("No")); 

 

        } while (response.equalsIgnoreCase("Yes")); 

 

        scanner.close(); 

        System.out.println("Thank you for using the Delivery Charge Calculator!"); 

    } 

 

    // Method to check if a postal code is in the CBD 

    private static boolean isCBD(String postalCode) { 

        return cbdPostalCodes.contains(postalCode.substring(0, 2)); // Check first two digits 

    } 

 

    // Method to validate postal codes 

    private static boolean isValidPostalCode(String postalCode) { 

        return postalCode.length() == 2 && postalCode.matches("\\d{2}"); 

    } 

 

    // Method to calculate delivery charge 

    private static int calculateDeliveryCharge(String pickup, String delivery) { 

        if (isCBD(pickup) && isCBD(delivery)) { 

            return 15; 

        } else if (isCBD(pickup) || isCBD(delivery)) { 

            return 20; 

        } else { 

            return 25; 

        } 

    } 

} 