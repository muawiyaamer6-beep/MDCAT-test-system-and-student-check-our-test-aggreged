
#include <iostream>
#include <string>
using namespace std;

void printResult(string name, string cnic, int roll, int marks, int total) {
    cout << "\n===========================" << endl;
    cout << "Student Name: " << name << endl;
    cout << "CNIC: " << cnic << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "Marks Obtained: " << marks << " out of " << total << endl;

    double percentage = (marks * 100.0) / total;
    cout << "Percentage: " << percentage << "%" << endl;

    string grade = (percentage >= 90) ? "A+" :
                   (percentage >= 75) ? "A" :
                   (percentage >= 60) ? "B" :
                   (percentage >= 50) ? "C" : "F";

    cout << "Grade: " << grade << endl;
    cout << "===========================\n" << endl;
}

int main() {
    string name, cnic;
    int roll, marks = 0;
    char userAns, choice;

    cout << "Welcome to Medical Test System\n";

    cin.ignore();
    cout << "Enter your Name: ";
    getline(cin, name);

    cout << "Enter your CNIC: ";
    cin >> cnic;

    cout << "Enter your Roll Number: ";
    cin >> roll;
 
    
    // 20 MCQs
    string questions[20] = {
        "1. Normal body temperature?\n(a) 36\n(b) 37\n(c) 38\n(d) 39",
        "2. Organ that pumps blood?\n(a) Brain\n(b) Lungs\n(c) Heart\n(d) Liver",
        "3. Blood filtered by?\n(a) Kidney\n(b) Lung\n(c) Heart\n(d) Brain",
        "4. Vitamin made by skin?\n(a) A\n(b) B\n(c) D\n(d) K",
        "5. Chambers in heart?\n(a) 2\n(b) 3\n(c) 4\n(d) 5",

        "6. Largest organ?\n(a) Heart\n(b) Skin\n(c) Liver\n(d) Kidney",
        "7. Oxygen carried by?\n(a) Plasma\n(b) RBC\n(c) WBC\n(d) Platelets",
        "8. Universal donor blood group?\n(a) A\n(b) B\n(c) AB\n(d) O",
        "9. Normal BP?\n(a) 100/60\n(b) 120/80\n(c) 140/90\n(d) 160/100",
        "10. Balance controlled by?\n(a) Cerebrum\n(b) Cerebellum\n(c) Medulla\n(d) Pons",

        "11. Total human teeth?\n(a) 28\n(b) 30\n(c) 32\n(d) 34",
        "12. Digestion starts in?\n(a) Stomach\n(b) Mouth\n(c) Intestine\n(d) Liver",
        "13. Largest bone?\n(a) Femur\n(b) Skull\n(c) Rib\n(d) Spine",
        "14. Blood pH?\n(a) 6\n(b) 7\n(c) 7.4\n(d) 8",
        "15. Heart beat controller?\n(a) Brain\n(b) SA node\n(c) Lung\n(d) Liver",

        "16. WBC function?\n(a) Oxygen\n(b) Immunity\n(c) Clotting\n(d) Hormone",
        "17. Platelets role?\n(a) Oxygen\n(b) Defense\n(c) Clotting\n(d) Digestion",
        "18. Vitamin for eyes?\n(a) A\n(b) B\n(c) C\n(d) D",
        "19. Normal pulse rate?\n(a) 60-100\n(b) 40-60\n(c) 100-120\n(d) 30-50",
        "20. Largest gland?\n(a) Pancreas\n(b) Liver\n(c) Thyroid\n(d) Pituitary"
    };

    char answers[20] = {
        'b','c','a','c','c',
        'b','b','d','b','b',
        'c','b','a','c','b',
        'b','c','a','a','b'
    };

    cout << "\n--- Start of Test ---\n";

    for(int i = 0; i < 20; i++) {
        cout << questions[i] << endl;
        cout << "Enter your answer (a/b/c/d): ";
        cin >> userAns;

        if(userAns == answers[i]) {
            marks += 5;   
        }
    }

    cout << "\n--- Test Completed ---\n";
    cout << "Do you want to print your result? (y/n): ";
    cin >> choice;

    if(choice == 'y') {
        printResult(name, cnic, roll, marks, 100); 
    } else {
        cout << "Thank you for taking the test!" << endl;
    }

    return 0;
}
