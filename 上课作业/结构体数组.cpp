#include <iostream>
#include <vector>
#include <string>

struct Student {
    std::string student_num;
    int program1;
    int program2;
    int program3;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<Student> students;
    int n;
    std::cin >> n;

    students.reserve(n); // Pre-allocate memory for the vector

    std::string student_num;
    int program1, program2, program3;
    while (n--) {
        std::cin >> student_num >> program1 >> program2 >> program3;
        if (program1 >= 90 && program2 >= 90 && program3 >= 90) {
            students.emplace_back(Student{student_num, program1, program2, program3}); // Construct the Student object in-place
        }
    }

    for (const auto &s : students) {
        std::cout << s.student_num << " " << s.program1 << " " << s.program2 << " " << s.program3 << '\n';
    }
    std::cout << students.size();

    return 0;
}