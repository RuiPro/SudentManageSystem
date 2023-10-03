/*
用于保存部分比较长的SQL语句
*/


#include <string>
using std::string;

string create_table_teacher = R"(CREATE TABLE teacher(
                        id INT UNSIGNED UNIQUE NOT NULL,
                        nickname char(20),
                        gender INT UNSIGNED,
                        passwd char(30)
                    ))";
string create_table_student = R"(CREATE TABLE student(
                        id INT UNSIGNED UNIQUE NOT NULL,
                        name char(20) NOT NULL,
						age INT UNSIGNED,
                        gender INT UNSIGNED,
                        grade INT UNSIGNED,
                        class INT UNSIGNED
                    ))";
string create_table_exam = R"(CREATE TABLE exam(
                        id INT UNSIGNED UNIQUE NOT NULL,
                        name char(30) NOT NULL,
                        date_year INT UNSIGNED,
                        date_month INT UNSIGNED,
                        date_day INT UNSIGNED
                    ))";
string create_table_score = R"(CREATE TABLE score(
						exam_id INT UNSIGNED NOT NULL,
                        student_id INT UNSIGNED NOT NULL,
                        course_id INT UNSIGNED NOT NULL,
                        score INT UNSIGNED
                    ))";
string create_table_course = R"(CREATE TABLE course(
                        id INT UNSIGNED UNIQUE NOT NULL,
                        name char(20) NOT NULL
                    ))";
