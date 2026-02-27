---

# 📚 Student Record System (C)

A lightweight command-line Student Record Management System built in C.
This project focuses on practical data handling, dynamic memory management, and file persistence using core C concepts.

Instead of being just a basic CRUD console app, this project demonstrates structured programming, modular design, and efficient record management in a low-level language.

---

## 🚀 Overview

This application allows users to manage student records directly from the terminal. It supports:

* Adding new student records
* Modifying existing records
* Deleting student records
* Searching by roll number
* Calculating class average
* Sorting records (ascending/descending by marks)
* Saving records to file
* Loading records from file

All records are handled dynamically in memory and can be persisted to a text file.

---

## 🛠 Built With

* **Language:** C
* **Compiler:** GCC
* **IDE:** CLion / VS Code / Any C-compatible environment
* **Storage:** Dynamic memory (`malloc`, `realloc`, `free`)
* **File Handling:** Standard C file I/O (`fopen`, `fprintf`, `fscanf`, etc.)

---

## 🧠 Key Concepts Applied

This project demonstrates:

* Struct-based data modeling
* Dynamic memory allocation
* Modular programming with functions
* File I/O operations
* Searching algorithms
* Sorting logic
* Array manipulation
* Input validation and user interaction handling

---

## 📂 Project Structure

```
srs/
│
├── main.c
├── students.txt        # Generated file for persistent storage
├── Makefile (optional)
└── README.md
```

---

## ⚙️ Features

### 1️⃣ Student Management

* Add new student (Name, Roll Number, Marks)
* Modify student details
* Delete student record
* Display all students

### 2️⃣ Search

* Search by roll number
* Instant record lookup

### 3️⃣ Academic Insights

* Automatic pass/fail check (threshold: 40+)
* Calculate class average
* Sort students by marks (ASC/DESC)

### 4️⃣ Persistence

* Save records to a text file
* Load records from file at startup

---

## ▶️ How to Run

### Compile

```bash
gcc main.c -o srs
```

### Run

```bash
./srs
```

---

## 📌 Why I Built This

I wanted to build something practical using pure C that goes beyond simple input/output exercises.
This project focuses on real-world fundamentals like:

* Memory management
* Data persistence
* Structuring scalable logic
* Clean function separation

It’s a simple system, but it reinforces core programming foundations that apply to larger systems.

---

## 📄 License

This project is open for learning and experimentation.

---
