# 🧮 DSA with C++ — By Nikhil Gautam

A complete and beginner-friendly collection of **Data Structures and Algorithms (DSA)** problems solved in **C++**.  
This repository helps you **learn, revise, and master DSA** concepts step by step — from **basic star patterns** to **advanced data structures and algorithms**.

---

## 🚀 About This Repository

This repository contains **topic-wise organized DSA problems**, each with:
- ✅ Clear **problem statements**  
- ✅ **Input/output examples**  
- ✅ **Step-by-step explanations**  
- ✅ **Time and Space Complexity**  
- ✅ **Clean, optimized C++ solutions**

Whether you're preparing for **coding interviews**, **college exams**, or **competitive programming**, this repo is your go-to DSA guide.

---

## 📂 Folder Structure

DSA-with-C++
│
├── Patterns/
│ ├── RightTriangleStarPattern.cpp
│ ├── InvertedPyramid.cpp
│ └── DiamondPattern.cpp
│
├── Arrays/
│ ├── find-maximum-in-array.cpp
│ ├── reverse-array.cpp
│ └── find-second-largest.cpp
│
├── Strings/
│ ├── reverse-string.cpp
│ ├── check-palindrome.cpp
│ └── count-vowels.cpp
│
├── Sorting/
│ ├── bubble-sort.cpp
│ ├── selection-sort.cpp
│ └── quick-sort.cpp
│
├── Recursion/
│ ├── factorial-using-recursion.cpp
│ ├── fibonacci-series.cpp
│ └── sum-of-digits.cpp
│
└── README.md


> Each topic is kept in a separate folder for better readability and easy navigation.

---

## ⚙️ How to Run C++ Programs in VS Code

Follow these steps to run any file from this repository on your local system:

### 🧩 Step 1: Install VS Code
Download and install **[Visual Studio Code](https://code.visualstudio.com/)**.

### 🧰 Step 2: Install C++ Compiler
- **Windows:** Install [MinGW](https://www.mingw-w64.org/), then add it to your system path.  
- **Mac/Linux:** Use `g++` (already installed in most cases) or install via terminal:
  ```bash
  sudo apt install g++

Step 3: Install Extensions in VS Code
Install the following extensions:
C/C++ by Microsoft
Code Runner (optional but useful for quick execution)

🧮 Step 4: Run the Code

Open the desired .cpp file (e.g., Patterns/RightTriangleStarPattern.cpp)
Click Run Code (or press Ctrl + Alt + N)
Or, use terminal commands:
g++ filename.cpp -o output
./output

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


Input:

5


Output:

*
**
***
****
*****


Key Topics Covered

⭐ Pattern Problems

🔢 Arrays & Searching
🧵 Strings Manipulation
🔁 Recursion
🔄 Sorting Algorithms
🔗 Linked Lists (Coming Soon)
🧮 Mathematical Problems
🧠 Interview-Oriented DSA Questions

🧠 Why This Repository?

📁 Clean, organized, and topic-wise structured
🧩 Beginner-friendly and easy to understand
⚡ Includes optimized solutions
💬 Helpful comments and explanations
🧭 Ideal for interview preparation and quick revision
🔍 SEO-optimized — easy to discover via Google or GitHub search

🤝 How to Contribute

Want to contribute and help others learn? Follow these steps:

Fork the repository
Clone your fork:
git clone https://github.com/your-username/DSA-with-nikhil.git

Add new solutions or improve existing ones
Commit and push changes
Create a Pull Request
Contributions are always welcome — whether it's new problems, code optimization, or documentation improvements!

📢 Author

👨‍💻 Nikhil Gautam
🎓 BSc IT | 💻 DSA & Web Development Enthusiast
📍 Passionate about coding, clean code practices, and open-source learning.

🔗 GitHub Profile: https://github.com/itznik79
💼 LinkedIn: https://www.linkedin.com/in/nikhil-gautam-4365b0292/

🏁 License
This repository is licensed under the MIT License — you’re free to use, share, and improve the code with proper credit.

🏆 Keywords (for SEO)

DSA with C++, C++ DSA questions, C++ coding practice, Pattern printing in C++,
Array problems in C++, Sorting algorithms, Recursion in C++,
C++ interview preparation, Learn DSA step by step, C++ examples for beginners

⭐ If you find this repo helpful, don’t forget to Star it on GitHub!

“Practice DSA daily — not for the algorithm, but for the logic behind it.”
— Nikhil Gautam
---
