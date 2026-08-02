# Digital Detective System - PF Project

```markdown
# 🕵️ Digital Detective System

## 📌 Project Overview
The **Digital Detective System** is a C++ console-based application developed as a **Programming Fundamentals (PF)** project. It simulates a simple crime investigation where detectives analyze clues, assign evidence-based scores to suspects, and identify the most probable culprit.

The project demonstrates the use of:
- Functions
- Arrays
- File Handling
- Loops
- Conditional Statements
- Searching
- Scoring Algorithms

---

# 🎯 Project Objective

The objective of this project is to:
- Read suspect information from a text file.
- Allow investigators to enter witness clues.
- Match clues with suspect profiles.
- Assign evidence-based scores.
- Identify the most probable suspect.
- Generate an investigation report.

---

# 💻 Technologies Used

- C++
- File Handling (`fstream`)
- Arrays
- Functions
- Console Interface

---

# 📂 Project Files

```

Project/
│
├── main.cpp
├── suspect.txt
└── README.md

```

---

# 📄 Suspect Data Format

The project reads data from **suspect.txt**.

Example:

```

Zaib male black black black black yes 0
Jawad male brown white blue brown no 0
Rimsha female black gray black black no 0

```

Each line contains:

- Name
- Gender
- Hair Color
- Shirt Color
- Pant Color
- Shoe Color
- Hat (yes/no)
- Initial Score

---

# ⚙️ Features

## 1. Display Suspect List

Displays all suspects with:

- Name
- Gender
- Hair Color
- Shirt Color
- Pant Color
- Shoe Color
- Hat Status
- Current Score

---

## 2. Investigate Clues

The investigator enters witness observations:

- Gender
- Hair Color
- Shirt Color
- Pant Color
- Shoe Color
- Hat

Every matching clue increases the suspect's score.

---

## 3. Evidence-Based Scoring

Additional scores are awarded automatically based on evidence.

Scoring Rules:

| Evidence | Points |
|----------|--------|
| Black Hair | +3 |
| Black Shirt | +2 |
| Black Pant | +2 |
| Black Shoes | +2 |
| Wearing Hat | +3 |
| Male | +1 |

---

## 4. Culprit Identification

The system compares all scores and identifies the suspect with the highest score.

Output includes:

- Suspect Name
- Total Score

---

## 5. Investigation Report

Generates a complete report containing:

- Case Status
- Suspect Details
- Scores
- Primary Suspect

Possible Case Status:

- Solved
- Unsolved
- Inconclusive (Tie)

---

## 6. Suspect Search

Searches a suspect by name and displays all stored information.

---

## 7. Future Enhancement

Currently displays:

```

Multiple Cases (Future Enhancement)

```

Possible future improvements:

- Multiple crime cases
- Database support
- Fingerprint matching
- Image recognition
- GUI interface
- Login system

---

# 🔄 Program Flow

```

Start
│
▼
Load Suspect Data
│
▼
Display Main Menu
│
├── Display Suspects
├── Investigate Clues
├── Evidence Scoring
├── Identify Culprit
├── Generate Report
├── Search Suspect
└── Exit

````

---

# 📚 Programming Concepts Used

- Functions
- Arrays
- File Handling
- Searching
- Loops
- Conditional Statements
- Modular Programming
- Scoring Algorithm

---

# 📈 Advantages

- Easy to understand
- Modular design
- File-based storage
- Interactive menu system
- Beginner-friendly PF project

---

# ⚠️ Limitations

- Supports only three suspects.
- Uses arrays instead of dynamic data structures.
- Console-based interface.
- No database connectivity.
- Scores are not permanently saved.

---

# 🚀 Future Improvements

- Dynamic number of suspects
- Database integration
- GUI using Qt or C#
- Fingerprint verification
- AI-based suspect prediction
- Save investigation history
- Case management system

---

# ▶️ How to Run

1. Compile the program:

```bash
g++ main.cpp -o detective
````

2. Run the executable:

```bash
./detective
```

(Windows)

```bash
detective.exe
```

---

# 👨‍💻 Author

**Project Title:** Digital Detective System

**Course:** Programming Fundamentals (PF)

**Language:** C++

---

# ✅ Conclusion

The **Digital Detective System** is a simple yet effective Programming Fundamentals project that demonstrates core C++ concepts through a real-world crime investigation scenario. It provides practical experience with file handling, functions, arrays, searching, and modular programming while offering a structured and interactive approach to solving a fictional investigation.

```

This is a clean, professional `README.md` suitable for submission as a PF project on GitHub or with your university assignment.
```
