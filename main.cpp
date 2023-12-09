
#include <vector>
#include "iostream"

using std::string, std::cout, std::cin, std::endl, std::vector;
struct Student {
    string student_num;
    int program1;
    int program2;
    int program3;
};

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<Student> students;
    int n;
    cin >> n;
    string student_num;
    int program1, program2, program3;
    while (n--) {
        cin >> student_num;
        cin >> program1 >> program2 >> program3;
        if (program1 >= 90 && program2 >= 90 && program3 >= 90)
            students.push_back({student_num, program1, program2, program3});
    }
    for (const auto &item: students) {
        cout << item.student_num << " " << item.program1 << " " << item.program2 << " " << item.program3 << '\n';
    }
//   for (int i=0;i<students.size();i++){
//       cout<<students[i].student_num<<" "<<students[i].program1<<" "<<students[i].program2<<" "<<students[i].program3<<'\n';
//   }
    cout << students.size();
    return 0;
}