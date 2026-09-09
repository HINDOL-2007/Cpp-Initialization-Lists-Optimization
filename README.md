# ⚡ C++ Overclocked GPU (Initialization Lists)

## 📖 About the Project
This project is a C++ console application that demonstrates **Constructor Initialization Lists**, a modern C++ best practice for performance optimization. 

Instead of assigning values inside the constructor body, the variables are initialized directly at the time of object creation. The project simulates a GPU overclocking utility to showcase how to safely chain variable initializations based on dependent mathematical operations.

## ✨ Features
*   **Initialization List Syntax:** Utilizes the colon syntax (`: var1(val), var2(val)`) to initialize class members immediately upon object instantiation, bypassing the overhead of default initialization followed by assignment.
*   **Dependency Chaining:** Successfully initializes a secondary variable (`BoostClock`) using the mathematical manipulation of a primary variable (`BaseClock`) within the exact same initialization line.
*   **Declaration Order Safety:** Carefully orders the private member variables to prevent the notorious "garbage value" trap, proving an understanding of C++ compiler execution sequences.

## 🏆 Technical Learnings & Architecture
*   **Compiler Execution Rules:** Validated the strict C++ rule that initialization lists execute based on the order variables are *declared* in the class blueprint, not the order they are written in the list.
*   **Performance Best Practices:** Adopted the preferred architectural standard for assigning `const` and standard variables in modern C++ software development.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Initialization Lists, Variable Declaration Order, Object-Oriented Architecture, Constructor Optimization.

## 🛠️ How to Run
1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ gpu_profile.cpp -o gpu_profile
