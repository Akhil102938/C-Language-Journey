Find Common Elements in Two Arrays

📖 Overview

This project demonstrates how to compare two arrays and identify the elements that are common to both. The program uses nested "for" loops to compare every element of the first array with every element of the second array and prints the matching values.

This is a beginner-friendly C programming project that helps in understanding array traversal, nested loops, and comparison logic.

---

🎯 Objective

- Learn how to compare two arrays.
- Understand the use of nested loops.
- Practice conditional statements ("if").
- Improve logical thinking while working with arrays.

---

🛠️ Technologies Used

- Programming Language: C
- Compiler: GCC / Code::Blocks / Dev-C++

---

📚 Concepts Covered

- Arrays
- Nested "for" loops
- Conditional statements ("if")
- Array comparison
- Common element detection

---

📝 Algorithm

1. Initialize two integer arrays.
2. Use the outer loop to select one element from the first array.
3. Use the inner loop to compare it with every element of the second array.
4. If both elements are equal, print the common element.
5. Continue the comparison until all elements have been checked.

---

💻 Source Code

#include<stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    int b[5]={20,40,60,80,10};
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d\n",a[i]);
            }
        }
    }

    return 0;
}

---

▶️ Sample Input

Array 1:
10 20 30 40 50

Array 2:
20 40 60 80 10

---

✅ Sample Output

20

40

10

---

📊 Time Complexity

- Time Complexity: O(n × m)
- Space Complexity: O(1)

---

📖 Explanation

The program compares each element of the first array with every element of the second array.

For example:

- 10 is compared with all elements in the second array and a match is found.
- 20 is compared with all elements and a match is found.
- 30 has no match.
- 40 has a match.
- 50 has no match.

Finally, the program prints all common elements.

---

🎓 Learning Outcome

After completing this project, you will understand:

- How nested loops work.
- How to compare elements from two arrays.
- How to identify common values between datasets.
- How to solve array comparison problems efficiently.

---

🚀 Future Improvements

- Accept array elements from the user.
- Remove duplicate common elements.
- Compare arrays of different sizes.
- Store common elements in a third array.

---

👨‍💻 Author

Akhil G

Learning C Programming and building projects consistently to improve problem-solving skills.

---

⭐ Thank you for visiting this repository. If you find this project useful, consider giving it a star!
