# 💼 Banking Management System (C++ OOP)

A console-based Banking Management System built in **C++**, showcasing key **Object-Oriented Programming (OOP)** concepts like classes, encapsulation, constructors, and modular logic.

---

## 📌 Features

- Create new **Single** or **Joint** accounts
- Secure login with a 4-digit PIN
- Deposit money into an account
- Withdraw money from an account
- Balance inquiry
- Change PIN securely
- Close account
- View account details
- Admin panel to view all accounts

---

## 🧠 Concepts Used

- **Classes & Objects**
- **Constructors (Overloading)**
- **Vectors** for storing accounts
- **Encapsulation** of data
- **PIN-based authentication**
- **Function Modularization**

---

## 🗂️ File Structure

```
Banking-Management-System/
│
├── main.cpp              // Complete logic and interface
└── README.md             // Project documentation
```

> *Note:* All logic is included in `main.cpp` for simplicity and ease of compilation. No external `.h` or `.cpp` files are used.

---

## 🛠️ Requirements

- C++ compiler (g++, clang++)
- Compatible with Windows/Linux terminal

---

## ▶️ How to Run

### Using Command Line

```bash
g++ main.cpp -o bank
./bank
```

Or use any C++ IDE like:
- Code::Blocks
- Visual Studio
- Dev C++
- VSCode with C++ extension

---

## 💡 Account Creation Flow

- Option to create either Savings or Current account
- Joint account support
- Automatic account number generation
- PIN protection for security
- Minimum ₹10,000 balance required for current accounts

---

## 🔐 Security

- Every transaction (deposit/withdraw/change PIN) requires correct PIN
- PIN change requires current PIN for verification

---

## 🚀 Sample Output Snippet

```
|-----------------------------------------------|
|     WELCOME TO YRNCOLLO BANKING SYSTEM        |
|-----------------------------------------------|
|  1) ADMINISTRATOR                             |
|  2) USER                                      |
|  3) EXIT                                      |
|-----------------------------------------------|
```

---

## ✅ To-Do / Future Improvements

- [ ] Add Transaction History
- [ ] Persist account data using file I/O
- [ ] Encrypt or hash PINs
- [ ] Implement GUI using Qt or web-based frontend

---

## 🙋‍♂️ Author

**Bhavyank Sarolia**  
Built for academic learning and demonstrating core C++ OOP skills.