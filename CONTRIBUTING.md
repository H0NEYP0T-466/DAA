# Contributing to DAA (Design and Analysis of Algorithms) 🤝

Thank you for your interest in contributing to our comprehensive algorithms repository! We welcome contributions from developers of all skill levels. This guide will help you get started with contributing to the project.

---

## 📋 Table of Contents

- [🚀 Getting Started](#-getting-started)
- [🍴 How to Fork and Contribute](#-how-to-fork-and-contribute)
- [📝 Code Style and Guidelines](#-code-style-and-guidelines)
- [🐛 Bug Reports](#-bug-reports)
- [✨ Feature Requests](#-feature-requests)
- [🧪 Testing Guidelines](#-testing-guidelines)
- [📖 Documentation Updates](#-documentation-updates)
- [💬 Community Guidelines](#-community-guidelines)

---

## 🚀 Getting Started

### Prerequisites
- **C++ Compiler** (GCC 7.0+, Clang 6.0+, or MSVC 2017+)
- **Git** for version control
- **GitHub account** for submitting contributions
- Basic understanding of **algorithms and data structures**

### Development Environment Setup
1. **Fork the repository** on GitHub
2. **Clone your fork** locally:
   ```bash
   git clone https://github.com/YOUR_USERNAME/DAA.git
   cd DAA
   ```
3. **Add upstream remote**:
   ```bash
   git remote add upstream https://github.com/H0NEYP0T-466/DAA.git
   ```

---

## 🍴 How to Fork and Contribute

### Step-by-Step Contribution Process

1. **Fork the Repository**
   - Click the "Fork" button on the GitHub repository page
   - This creates a copy of the repository in your GitHub account

2. **Clone Your Fork**
   ```bash
   git clone https://github.com/YOUR_USERNAME/DAA.git
   cd DAA
   ```

3. **Create a New Branch**
   ```bash
   git checkout -b feature/your-feature-name
   # or
   git checkout -b fix/bug-description
   ```

4. **Make Your Changes**
   - Add new algorithms or improve existing ones
   - Follow the coding standards outlined below
   - Test your implementation thoroughly

5. **Commit Your Changes**
   ```bash
   git add .
   git commit -m "Add: [Algorithm Name] implementation with detailed comments"
   ```

6. **Push to Your Fork**
   ```bash
   git push origin feature/your-feature-name
   ```

7. **Create a Pull Request**
   - Go to your fork on GitHub
   - Click "New Pull Request"
   - Provide a clear description of your changes
   - Reference any related issues

### Branch Naming Conventions
- **Features**: `feature/algorithm-name` or `feature/description`
- **Bug Fixes**: `fix/bug-description`
- **Documentation**: `docs/update-description`
- **Refactoring**: `refactor/component-name`

---

## 📝 Code Style and Guidelines

### General C++ Coding Standards

#### File Naming
- Use **descriptive names** for algorithm files
- Follow the existing naming pattern: `AlgorithmName.cpp`
- For algorithms in folders, maintain the folder structure

#### Code Structure
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
// Include standard libraries first

using namespace std;

// Function declarations with clear comments
/**
 * Brief description of the algorithm
 * Time Complexity: O(...)
 * Space Complexity: O(...)
 * @param parameter_name Description of parameter
 * @return Description of return value
 */
returnType functionName(parameters) {
    // Implementation with detailed comments
}

// Utility functions
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function with example usage
int main() {
    // Example input
    // Call algorithm function
    // Display results
    return 0;
}
```

#### Commenting Standards
- **Algorithm Header**: Include time/space complexity, brief description
- **Inline Comments**: Explain complex logic and algorithm steps
- **Function Documentation**: Describe parameters, return values, and purpose

#### Variable Naming
- Use **camelCase** for variables: `arraySize`, `currentIndex`
- Use **descriptive names**: `leftPointer`, `rightPointer` instead of `l`, `r`
- Use **UPPER_CASE** for constants: `MAX_SIZE`, `INF`

#### Code Formatting
- **Indentation**: Use 4 spaces (no tabs)
- **Braces**: Opening brace on the same line
- **Line Length**: Maximum 100 characters per line
- **Spacing**: Space around operators and after commas

### Algorithm-Specific Guidelines

#### Dynamic Programming
```cpp
// Include memoization table initialization
vector<vector<int>> dp(n, vector<int>(m, -1));

// Clear base cases
if (/* base condition */) {
    return /* base value */;
}

// Recursive relations with comments
// dp[i][j] represents: [clear explanation]
```

#### Graph Algorithms
```cpp
// Use appropriate data structures
vector<vector<int>> adj(n); // Adjacency list
vector<bool> visited(n, false);

// Clear graph representation
// 0-indexed or 1-indexed (be consistent)
```

#### Sorting Algorithms
```cpp
// Include comparison function if needed
bool compare(int a, int b) {
    return a < b; // Ascending order
}

// Provide both in-place and out-of-place versions when applicable
```

---

## 🐛 Bug Reports

When reporting bugs, please include:

### Required Information
- **Bug Description**: Clear, concise description of the issue
- **Steps to Reproduce**: Detailed steps to recreate the bug
- **Expected Behavior**: What should happen
- **Actual Behavior**: What actually happens
- **Environment**: OS, compiler version, C++ standard

### Bug Report Template
```markdown
## Bug Description
Brief description of the bug.

## Steps to Reproduce
1. Compile the file with: `g++ -o program file.cpp`
2. Run with input: `./program`
3. Observe the error/unexpected behavior

## Expected Behavior
Description of expected output/behavior.

## Actual Behavior
Description of what actually happens.

## Environment
- OS: [Windows/macOS/Linux]
- Compiler: [GCC/Clang/MSVC] version
- C++ Standard: [C++11/14/17/20]

## Additional Context
Any additional information, screenshots, or context.
```

---

## ✨ Feature Requests

We welcome suggestions for new algorithms and improvements!

### What We're Looking For
- **New Algorithm Implementations**: Sorting, searching, graph, DP, greedy, etc.
- **Algorithm Optimizations**: Improved time/space complexity
- **Alternative Implementations**: Different approaches to existing algorithms
- **Documentation Improvements**: Better explanations, examples, visualizations

### Feature Request Template
```markdown
## Feature Description
Clear description of the proposed feature/algorithm.

## Algorithm Category
- [ ] Sorting Algorithm
- [ ] Dynamic Programming
- [ ] Greedy Algorithm
- [ ] Graph Algorithm
- [ ] String Algorithm
- [ ] Mathematical Algorithm
- [ ] Other: [specify]

## Implementation Details
- Time Complexity: O(...)
- Space Complexity: O(...)
- Key advantages over existing solutions

## Use Cases
Real-world applications and examples.

## References
Links to papers, articles, or educational resources.
```

---

## 🧪 Testing Guidelines

### Manual Testing Requirements
Every algorithm implementation must include:

1. **Example Test Cases**
   ```cpp
   int main() {
       // Test case 1: Basic functionality
       int arr1[] = {64, 34, 25, 12, 22, 11, 90};
       int n1 = sizeof(arr1)/sizeof(arr1[0]);
       
       // Test case 2: Edge cases
       int arr2[] = {5}; // Single element
       int n2 = 1;
       
       // Test case 3: Already sorted
       int arr3[] = {1, 2, 3, 4, 5};
       int n3 = 5;
       
       // Run tests and verify outputs
   }
   ```

2. **Edge Case Testing**
   - Empty arrays/inputs
   - Single element cases
   - Already sorted data
   - Reverse sorted data
   - Duplicate elements
   - Large inputs (when feasible)

3. **Performance Verification**
   - Verify time complexity with large inputs
   - Check memory usage for space-critical algorithms

### Compilation Testing
Ensure your code compiles without warnings:
```bash
g++ -Wall -Wextra -std=c++17 -o algorithm algorithm.cpp
```

---

## 📖 Documentation Updates

### README Updates
When adding new algorithms:
- Update the **Features** section
- Add to the **Project Structure** tree
- Include usage examples if needed
- Update the **Roadmap** if applicable

### Code Documentation
- Add clear comments explaining algorithm logic
- Include complexity analysis in function headers
- Provide usage examples in the main function

### Algorithm Explanations
Consider adding:
- **Algorithm intuition**: Why does it work?
- **Step-by-step walkthrough**: How does it work?
- **Complexity analysis**: Time and space breakdown
- **Applications**: Real-world use cases

---

## 💬 Community Guidelines

### Code of Conduct
- **Be Respectful**: Treat all contributors with respect and kindness
- **Be Constructive**: Provide helpful feedback and suggestions
- **Be Patient**: Remember that contributors have different experience levels
- **Be Collaborative**: Work together to improve the codebase

### Communication Guidelines
- **Pull Request Reviews**: Provide specific, actionable feedback
- **Issue Discussions**: Stay on topic and be solution-oriented
- **Questions**: Feel free to ask questions if anything is unclear

### Recognition
We value all contributions! Contributors will be:
- **Acknowledged** in pull request reviews
- **Credited** in release notes for significant contributions
- **Invited** to become maintainers for consistent, high-quality contributions

---

## 🚀 Getting Help

### Resources
- **GitHub Issues**: For bug reports and feature requests
- **Discussions**: For general questions and algorithm discussions
- **Documentation**: Check the README for setup and usage instructions

### Contact
- **Project Maintainer**: [H0NEYP0T-466](https://github.com/H0NEYP0T-466)
- **Repository**: [DAA](https://github.com/H0NEYP0T-466/DAA)

---

## 📄 License

By contributing to this project, you agree that your contributions will be licensed under the [MIT License](LICENSE).

---

<div align="center">

**Thank you for contributing to the DAA project! 🙏**

**Together, we're building a comprehensive resource for algorithm learning and implementation.**

</div>