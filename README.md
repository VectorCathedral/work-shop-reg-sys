# 🛠️ Sonke Sivukile Workshop Registration System

Welcome to the **Sonke Sivukile Workshop Registration System** — a C++ console application designed to streamline participant registration, calculate fees, and apply discounts for workshop courses. Ideal for small training providers or coding learners looking to practice file I/O and basic data structures.

---

## 📦 Features

✅ Read course names and fees from a text file  
✅ Register one or more participants  
✅ Assign one or more courses per participant  
✅ Calculate total registration cost  
✅ Apply a 10% discount if:
- 3 or more participants are registered **and**
- Total cost is greater than R300  
✅ Export registration summary to an output file

---

## 📁 File Structure

├── CSWRS.cpp # Main source code (this program)

├── workshops.txt # Input file containing courses and prices

├── workshop_out.txt # Output file for participant course selections


---

## 🧾 Sample `workshops.txt` Content

Make sure this file exists **before running the program**. It should contain one course per line in the format:

Basic Programming,150

Data Analysis,200

Cybersecurity Essentials,180

Cloud Computing,250

AI Fundamentals,300

---

## ⚙️ Configuration Instructions

Before compiling and running the program:

1. Open `CSWRS.cpp` in your code editor.
2. Locate the following lines at the top of the file:

```cpp
std::string file_path = "C:\\Users\\user\\source\\repos\\FTOS\\workshops.txt";
std::string ws_out_file = "C:\\Users\\user\\source\\repos\\FTOS\\workshop_out.txt";

Replace these with the full file paths on your computer. For example:
std::string file_path = "D:\\Projects\\FTOS\\workshops.txt";
std::string ws_out_file = "D:\\Projects\\FTOS\\workshop_out.txt";

📝 Tip: On Windows, double backslashes (\\) must be used in C++ string paths.

🧾 Output
After the program runs:

The course selections will be written to workshop_out.txt.

The console will display the total bill, any discount applied, and the final amount.

