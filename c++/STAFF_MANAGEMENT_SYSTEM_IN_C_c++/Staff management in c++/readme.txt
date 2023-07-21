## Banking Management System

The **Banking Management System** is a console-based application that allows users to perform various banking operations like creating an account, logging in, depositing and withdrawing money, checking balance, calculating compound interest, and more. This program is designed for users in Nigeria, but it can be adapted for use in other regions.

### Features

1. **Create Account**: Users can create a new bank account by providing their personal information such as full name, email address, age, and mobile number. They can choose between a Current Account (C) or a Savings Account (S) and set an initial balance based on the account type.

2. **Sign In**: Registered users can log in using their account number and password to access their account and perform various transactions.

3. **Deposit Amount**: Account holders can deposit money into their account, and the balance will be updated accordingly.

4. **Withdraw Amount**: Users can withdraw money from their account, as long as the withdrawal amount is greater than or equal to Rs. 100 and there is sufficient balance in the account.

5. **Balance Enquiry**: Account holders can check their account balance at any time.

6. **Check Book Facility**: For current account holders, the system provides a checkbook facility.

7. **Calculate Compound Interest**: Savings account holders can calculate the compound interest for a given principle amount, interest rate, and time.

8. **Account Info**: Users can view their account information, including name, account number, age, email address, mobile number, account type, and available balance.

### How to Run the Application

1. Open a C++ compiler or IDE that supports console-based applications.

2. Copy and paste the provided C++ code into the compiler or IDE.

3. Compile and run the code.

4. The application will display the main menu with the following options:
   - Create Account
   - Sign In
   - Exit

5. Use the numeric keys to select an option from the main menu.

6. If you select "Create Account," the system will guide you through the process of creating a new account.

7. If you select "Sign In," you will be prompted to enter your account number and password. If the login is successful, the system will display the transaction menu.

8. In the transaction menu, you can select options to perform various banking operations.

9. To sign out and return to the main menu, select "Sign Out" from the transaction menu.

### Note

- When creating a new account, ensure that you enter valid information, and the initial deposit amount meets the minimum requirements for the account type (Rs. 500 for Savings and Rs. 1000 for Current).

- The application is intended for use in Nigeria, but you can modify it to suit other regions by adjusting the currency symbol or other region-specific details.

- This application does not use a persistent data storage system. Therefore, any created accounts will only exist within the runtime of the program. For a fully functional banking system, consider integrating a database to store user data securely.

### License

This code is provided under the MIT License, allowing you to use and modify the code for personal and commercial purposes. However, it is advised to credit the original creator if you use the code in your projects.

### Author

This Banking Management System is created by Sunday Abraham. Feel free to contact me at godwinsunday112@gmail.com for any questions or suggestions related to the project.

