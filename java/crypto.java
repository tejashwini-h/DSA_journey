

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class crypto{// Hardcoded cryptocurrency data
private static final Map<String, Double> cryptoPrices = new HashMap<>();
private static final Map<String, Double> portfolio = new HashMap<>();
private static final Map<String, Double> currencyRates = new HashMap<>();
static {
    // Initialize cryptocurrency prices (in USD)
    cryptoPrices.put("Bitcoin", 25000.0);
    cryptoPrices.put("Ethereum", 1600.0);
    cryptoPrices.put("Ripple", 0.50);
    cryptoPrices.put("Litecoin", 100.0);
    cryptoPrices.put("Cardano", 0.30);
    // Initialize mock currency rates (USD to target currency)
    currencyRates.put("USD", 1.0);
    currencyRates.put("EUR", 0.85);
    currencyRates.put("INR", 75.0);
    currencyRates.put("GBP", 0.74);
}
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Welcome to the Cryptocurrency Portfolio Tracker!");
    while (true) {
        System.out.println("\nMenu:");
        System.out.println("1. View Cryptocurrency Prices");
        System.out.println("2. Add Cryptocurrency to Portfolio");
        System.out.println("3. View Portfolio");
        System.out.println("4. Convert Portfolio Value to Another Currency");
        System.out.println("5. Exit");
        System.out.print("Enter your choice: ");
        int choice = scanner.nextInt();
        switch (choice) {
            case 1 -> displayCryptoPrices();
            case 2 -> addToPortfolio(scanner);
            case 3 -> viewPortfolio();
            case 4 -> convertPortfolioValue(scanner);
            case 5 -> {
                System.out.println("Thank you for using the Cryptocurrency Portfolio Tracker. Goodbye!");
                scanner.close();
                return;
            }
            default -> System.out.println("Invalid choice! Please try again.");
        }
    }
}
private static void displayCryptoPrices() {
    System.out.println("\nCryptocurrency Prices (in USD):");
    for (Map.Entry<String, Double> entry : cryptoPrices.entrySet()) {
        System.out.printf("%s: $%.2f%n", entry.getKey(), entry.getValue());
    }
}
private static void addToPortfolio(Scanner scanner) {
    System.out.println("\nAvailable Cryptocurrencies:");
    for (String crypto : cryptoPrices.keySet()) {
        System.out.println("- " + crypto);
    }
    System.out.print("Enter the cryptocurrency name: ");
    String cryptoName = scanner.next();
    if (!cryptoPrices.containsKey(cryptoName)) {
        System.out.println("Invalid cryptocurrency name! Try again.");
        return;
    }
    System.out.print("Enter the amount (in units): ");
    double amount = scanner.nextDouble();
    portfolio.put(cryptoName, portfolio.getOrDefault(cryptoName, 0.0) + amount);
    System.out.println("Successfully added to your portfolio!");
}
private static void viewPortfolio() {
    if (portfolio.isEmpty()) {
        System.out.println("Your portfolio is empty.");
        return;
    }
    System.out.println("\nYour Portfolio:");
    double totalValue = 0.0;
    for (Map.Entry<String, Double> entry : portfolio.entrySet()) {
        String crypto = entry.getKey();
        double quantity = entry.getValue();
        double value = quantity * cryptoPrices.get(crypto);
        totalValue += value;
        System.out.printf("%s: %.2f units (Value: $%.2f)%n", crypto, quantity, value);
    }
    System.out.printf("Total Portfolio Value: $%.2f%n", totalValue);
}
private static void convertPortfolioValue(Scanner scanner) {
    if (portfolio.isEmpty()) {
        System.out.println("Your portfolio is empty. Nothing to convert.");
        return;
    }
    System.out.println("\nAvailable Currencies:");
    for (String currency : currencyRates.keySet()) {
        System.out.println("- " + currency);
    }
    System.out.print("Enter the target currency: ");
    String targetCurrency = scanner.next();
    if (!currencyRates.containsKey(targetCurrency)) {
        System.out.println("Invalid currency! Try again.");
        return;
    }
    double conversionRate = currencyRates.get(targetCurrency);
    double totalValueInUSD = 0.0;
    for (Map.Entry<String, Double> entry : portfolio.entrySet()) {
        String crypto = entry.getKey();
        double quantity = entry.getValue();
        totalValueInUSD += quantity * cryptoPrices.get(crypto);
    }
    double convertedValue = totalValueInUSD * conversionRate;
    System.out.printf("Total Portfolio Value in %s: %.2f %s%n", targetCurrency, convertedValue, targetCurrency);

}
}
