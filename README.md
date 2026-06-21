Smart University Portal Simulator

A console-based C++ application that simulates a simple university portal. It walks a user through login, course registration, grade assignment, GPA calculation, and scholarship eligibility checking, all in one terminal session.

Features

•	Login System - Authenticates against two hardcoded accounts (admin/student).

•	Course Registration - Lets the user pick 3 courses from a list of 5 (Math, Physics, CS, Chemistry, English), with input validation and retry on invalid choice.

•	Grade Assignment - Randomly generates marks (0–100) for each registered course.

•	GPA Calculator - Converts marks to letter grades (A–F) and computes a 4.0-scale GPA.

•	Scholarship Eligibility - Determines Full, Half, or No scholarship based on GPA.

Requirements

•	A C++ compiler supporting C++11 or later (e.g. g++)
Build & Run

g++ -o university_portal "Smart_University_Portal_Simulator.cpp"
./university_portal

On Windows (MinGW):

g++ -o university_portal.exe "Smart_University_Portal_Simulator.cpp"
university_portal.exe

Usage

1.	Login with one of the following credentials:
Username, Password:
admin,	1234
student,	5678

3.	Register for courses: enter a number from 1–5 three times to select your courses.

o	1 = Math

o	2 = Physics


o	3 = CS

o	4 = Chemistry

o	5 = English

5.	View grades: marks are randomly generated for each course, and corresponding letter grades are displayed.

6.	View GPA: your GPA (0.0–4.0 scale) is calculated and printed.

7.	View scholarship result:

o	GPA ≥ 3.5 → Full Scholarship

o	3.0 ≤ GPA < 3.5 → Half Scholarship

o	GPA < 3.0 → Not Eligible

Program Flow

Login → Course Registration → Grade Assignment → GPA Calculation → Scholarship Check

If login fails, the program exits immediately.

Project Structure

Smart_University_Portal_Simulator.cpp   # Single-file source containing all modules
