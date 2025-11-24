-- Active: 1690987685319@@127.0.0.1@3306@company_db
-- Create a database
CREATE DATABASE EMPLOYEE;

-- Use a database
USE EMPLOYEE;

-- Drop a database
DROP DATABASE Employee;

-- Create a database
CREATE DATABASE IF NOT EXISTS Company_DB;

USE Company_DB;

-- Create a table in a database
CREATE TABLE students (
    roll_no INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50),
    department VARCHAR(50),
    city VARCHAR(50),
    marks FLOAT
);

-- Display all tables in a database
SHOW TABLES;
-- Describe a table : Used to display the structure of a table
DESCRIBE students;

--Drop : Used to delete a table
DROP TABLE students;

-- Turncate : Used to empty a table
TRUNCATE TABLE students;

SELECT * FROM students;

-- Alter

--Adding a new column
ALTER TABLE students ADD COLUMN phone VARCHAR(20);

-- Modify a column
ALTER TABLE students MODIFY COLUMN phone VARCHAR(10);

-- rename a column
ALTER TABLE students RENAME COLUMN phone TO phone_no;

-- Drop a column
ALTER TABLE students DROP COLUMN phone_no;

-- Practical

-- Students Table
-- roll_no	name	department	city	marks
-- 1	Aditi	CS	Delhi	85
-- 2	Manav	IT	Mumbai	76
-- 3	Riya	CS	Delhi	92
-- 4	Kabir	Math	Pune	88
-- 5	Sneha	IT	Mumbai	64
-- 6	Arjun	Math	Delhi	91

-- Select Data
SELECT * FROM students;
-- Insert Data
INSERT INTO
    students (
        roll_no,
        name,
        department,
        city,
        marks
    )
VALUES (1, 'Aditi', 'CS', 'Delhi', 85);

INSERT INTO students VALUES ( 2, 'Manav', 'IT', 'Mumbai', 76 );

INSERT INTO students VALUES (3, 'Riya', 'CS', 'Delhi', 92);

INSERT INTO students VALUES ( 4, 'Kabir', 'Math', 'Pune', 88 );

INSERT INTO students VALUES ( 5, 'Sneha', 'IT', 'Mumbai', 64 );

INSERT INTO students VALUES ( 6, 'Arjun', 'Math', 'Delhi', 91 );

SELECT * FROM students;
-- • Write a query to count students based on city
SELECT city, count(*) as student_count FROM students GROUP BY city;

-- • Write a query to find the max marks for each department
SELECT department, max(marks) as max_marks
FROM students
GROUP BY
    department;

-- • Write a query to find the departments having avg marks > 80 (GROUP BY + HAVING)
Select department, avg(marks) as avg_marks
FROM students
GROUP BY
    department
HAVING
    AVG(marks) > 80;

-- •Write a query to delete all students of a department(IT)
DELETE FROM students WHERE department = 'IT';

-- • Write a query to rename a column
Alter TABLE students RENAME COLUMN name TO s_name;

DESCRIBE students;

-- • Write a query to show average marks for each department
Select department, avg(marks) as avg_marks
FROM students
GROUP BY
    department;