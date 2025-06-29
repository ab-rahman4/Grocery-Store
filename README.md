
🛒 Supermarket Management System (C++)

A console-based C++ application that simulates a supermarket shopping experience with real-time inventory, category-based browsing, cart handling, and detailed billing including discounts and GST.

 🚀 Features

- 🗂️ 8 Product Categories:
  - Hot Selling
  - Cereals
  - Vegetables
  - Seafood
  - Bread & Breakfast
  - Meat
  - Fruits
  - Sweets
- 🔍 View product name, price, and available quantity
- 🛒 Add items to a dynamic cart
- 📉 Inventory auto-updates after purchase
- 🧾 Billing System with:
  - 15% Discount
  - 18% GST
  - Net amount calculation
  - Payment and balance summary
- 📊 Real-time cart summary during shopping

 ✅ Input Validation

- Ensures valid product index selection
- Restricts quantity to available stock
- Rejects negative or out-of-bound inputs
- Prompts re-entry until valid input is received

 🛠️ Built With

- C++ (Object-Oriented Programming)
- Console I/O
- Dynamic Memory Allocation
- Arrays and Conditional Logic

 🧑‍💻 How to Run

```bash
g++ supermarket.cpp -o supermarket
./supermarket

