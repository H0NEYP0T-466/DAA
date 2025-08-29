# DAA - Design and Analysis of Algorithms 🚀

![GitHub License](https://img.shields.io/github/license/H0NEYP0T-466/DAA?style=for-the-badge&color=brightgreen)
![GitHub Stars](https://img.shields.io/github/stars/H0NEYP0T-466/DAA?style=for-the-badge&color=yellow)
![GitHub Forks](https://img.shields.io/github/forks/H0NEYP0T-466/DAA?style=for-the-badge&color=blue)
![Contributions Welcome](https://img.shields.io/badge/Contributions-Welcome-brightgreen?style=for-the-badge)
![GitHub Issues](https://img.shields.io/github/issues/H0NEYP0T-466/DAA?style=for-the-badge&color=red)

A comprehensive collection of **Design and Analysis of Algorithms** implementations in C++. This repository contains efficient implementations of fundamental algorithms across various categories including sorting, dynamic programming, greedy algorithms, graph algorithms, and string matching techniques.

---

## 🔗 Links

- [📋 Issues](https://github.com/H0NEYP0T-466/DAA/issues)
- [🤝 Contributing Guidelines](CONTRIBUTING.md)
- [📄 License](LICENSE)

---

## 📚 Table of Contents

- [📦 Installation](#-installation)
- [🚀 Usage](#-usage)
- [✨ Features](#-features)
- [📁 Project Structure](#-project-structure)
- [🛠️ Built With](#️-built-with)
- [🤝 Contributing](#-contributing)
- [📄 License](#-license)
- [🗺️ Roadmap](#️-roadmap)
- [🙏 Acknowledgements](#-acknowledgements)

---

## 📦 Installation

### Prerequisites
- **C++ Compiler** (GCC 7.0+ or Clang 6.0+ or MSVC 2017+)
- **Standard Template Library (STL)** support
- **Make** (optional, for build automation)

### Steps

1. **Clone the repository**
   ```bash
   git clone https://github.com/H0NEYP0T-466/DAA.git
   cd DAA
   ```

2. **Compile any algorithm**
   ```bash
   # Example: Compile Shell Sort
   g++ -o shell_sort Shell_sort.cpp
   
   # Example: Compile Dynamic Programming algorithms
   g++ -o knapsack Dynamic_progrmaing/01Knapsack_dp_bottom_up.cpp
   
   # Example: Compile Greedy algorithms
   g++ -o huffman greedy_algorithms/huffman_coding.cpp
   ```

3. **Run the executable**
   ```bash
   ./shell_sort
   ./knapsack
   ./huffman
   ```

---

## 🚀 Usage

### Command Line Interface
Each algorithm can be compiled and executed independently:

```bash
# Sorting Algorithms
g++ -o bucket_sort Bucket_sort.cpp && ./bucket_sort
g++ -o counting_sort Counting_Sort.cpp && ./counting_sort
g++ -o radix_sort Radix_sort.cpp && ./radix_sort

# Dynamic Programming
g++ -o lcs Dynamic_progrmaing/lcs_dp_bottom_up.cpp && ./lcs
g++ -o mcm Dynamic_progrmaing/mcm_dp_bottom_up.cpp && ./mcm

# Greedy Algorithms
g++ -o kruskal greedy_algorithms/kruskal's_algorithm.cpp && ./kruskal
g++ -o fractional_knapsack greedy_algorithms/fractional_knapsack.cpp && ./fractional_knapsack

# String Matching
g++ -o kmp "string_matching(knutt_morris_pratt(kmp) algo ).cpp" && ./kmp
g++ -o rabin_karp "string_matching(rabin_carp Algorithm).cpp" && ./rabin_karp
```

### Example Usage
```cpp
// Example: Using Shell Sort
#include "Shell_sort.cpp"

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    shellSort(arr, n);
    printArray(arr, n);
    
    return 0;
}
```

---

## ✨ Features

### 🔢 Sorting Algorithms
- **Shell Sort** - Improved insertion sort with gap sequence
- **Bucket Sort** - Distribution-based sorting for uniformly distributed data
- **Counting Sort** - Linear time sorting for integers within a range
- **Radix Sort** - Non-comparative sorting algorithm

### 💡 Dynamic Programming
- **0/1 Knapsack Problem** - Multiple implementations (brute force, top-down, bottom-up)
- **Longest Common Subsequence (LCS)** - String similarity algorithms
- **Matrix Chain Multiplication** - Optimal parenthesization problem
- **Fibonacci Series** - Various DP approaches with space optimization

### 🎯 Greedy Algorithms
- **Huffman Coding** - Optimal data compression
- **Kruskal's Algorithm** - Minimum Spanning Tree with Disjoint Set Union
- **Fractional Knapsack** - Greedy optimization problem
- **Activity Selection** - Meeting scheduling problem

### 🌐 Graph Algorithms
- **Floyd-Warshall Algorithm** - All-pairs shortest path
- **Topological Sort** - Both DFS and BFS (Kahn's) implementations
- **Single Source Shortest Path** - Using topological sort in DAG

### 🔤 String Matching
- **Knuth-Morris-Pratt (KMP)** - Linear time pattern matching
- **Rabin-Karp Algorithm** - Rolling hash-based matching
- **Naive Approach** - Brute force string matching

### ⚡ Additional Features
- **Kirchoff's Theorem** - Circuit analysis implementation
- **Optimized implementations** with detailed comments
- **Multiple algorithm variants** for comparison
- **Memory-efficient solutions** where applicable

---

## 📁 Project Structure

```
DAA/
├── 📄 README.md
├── 📄 LICENSE
├── 📄 CONTRIBUTING.md
├── 🔧 .git/
├── 
├── 📊 Sorting Algorithms
│   ├── Shell_sort.cpp
│   ├── Bucket_sort.cpp
│   ├── Counting_Sort.cpp
│   └── Radix_sort.cpp
├── 
├── 📁 Dynamic_progrmaing/
│   ├── 01Knapsack_brute_forse.cpp
│   ├── 01Knapsack_dp_bottom_up.cpp
│   ├── 01Knapsack_dp_top_down.cpp
│   ├── fibonacci_series.cpp
│   ├── finding nth number in fibonaci series using dp(bottom up)+space_optimization.cpp
│   ├── finding nth number in fibonaci series using dp(bottom up).cpp
│   ├── finding nth number in fibonaci series using dp(top down).cpp
│   ├── finding nth number in fibonaci series.cpp
│   ├── lcs_dp_bottom_up.cpp
│   ├── lcs_dp_top-down.cpp
│   ├── mcm_brute_forse.cpp
│   ├── mcm_dp_bottom_up.cpp
│   ├── mcm_dp_top_down.cpp
│   └── simple_lcs.cpp
├── 
├── 📁 greedy_algorithms/
│   ├── candy_shop _problem.cpp
│   ├── fractional_knapsack.cpp
│   ├── huffman_coding.cpp
│   ├── kruskal's_algorithm.cpp
│   ├── n number of meetings in a room.cpp
│   └── reverse_string.cpp
├── 
├── 🌐 Graph Algorithms
│   ├── Floyd_Warshall Algorithm_APSP.cpp
│   ├── single_source_shortestPath_using topological_sort in DAG.cpp
│   ├── topological_sort(bfs) kahn's algorithm.cpp
│   └── topological_sort(dfs).cpp
├── 
├── 🔤 String Matching Algorithms
│   ├── string_matching(knutt_morris_pratt(kmp) algo ).cpp
│   ├── string_matching(naive approch).cpp
│   └── string_matching(rabin_carp Algorithm).cpp
└── 
└── ⚡ Additional Algorithms
    └── Kirchoff's therom.cpp
```

---

## 🛠️ Built With

### 💻 Languages
![C++](https://img.shields.io/badge/C++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

### 📚 Libraries & Frameworks
![STL](https://img.shields.io/badge/STL-Standard%20Template%20Library-blue?style=for-the-badge)

### 🗄️ Data Structures
![Vector](https://img.shields.io/badge/Vector-Dynamic%20Array-green?style=for-the-badge)
![Queue](https://img.shields.io/badge/Queue-FIFO%20Container-orange?style=for-the-badge)
![Priority Queue](https://img.shields.io/badge/Priority%20Queue-Heap%20Based-red?style=for-the-badge)
![String](https://img.shields.io/badge/String-Character%20Sequence-purple?style=for-the-badge)

### 🔧 Tools
![GCC](https://img.shields.io/badge/GCC-GNU%20Compiler%20Collection-black?style=for-the-badge&logo=gnu&logoColor=white)
![Git](https://img.shields.io/badge/Git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)

### 🧮 Algorithms & Techniques
![Dynamic Programming](https://img.shields.io/badge/Dynamic%20Programming-Optimization-brightgreen?style=for-the-badge)
![Greedy Algorithms](https://img.shields.io/badge/Greedy%20Algorithms-Local%20Optimization-yellow?style=for-the-badge)
![Graph Algorithms](https://img.shields.io/badge/Graph%20Algorithms-Network%20Analysis-blue?style=for-the-badge)
![Sorting Algorithms](https://img.shields.io/badge/Sorting%20Algorithms-Data%20Organization-orange?style=for-the-badge)
![String Algorithms](https://img.shields.io/badge/String%20Algorithms-Pattern%20Matching-purple?style=for-the-badge)

---

## 🤝 Contributing

We welcome contributions! Please see our [Contributing Guidelines](CONTRIBUTING.md) for details on:

- 🍴 How to fork and contribute
- 📝 Code style and linting rules  
- 🐛 Bug reports and feature requests
- 🧪 Testing and documentation updates

### Quick Start for Contributors
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

---

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

---

## 🗺️ Roadmap

### ✅ Current Features
- [x] **Sorting Algorithms** - Shell, Bucket, Counting, Radix sort implementations
- [x] **Dynamic Programming** - Knapsack, LCS, MCM, Fibonacci variants
- [x] **Greedy Algorithms** - Huffman coding, MST, fractional knapsack
- [x] **Graph Algorithms** - Floyd-Warshall, topological sort, shortest paths
- [x] **String Matching** - KMP, Rabin-Karp, naive approaches

### 🔄 Planned Features
- [ ] **Advanced Graph Algorithms**
  - [ ] Dijkstra's shortest path algorithm
  - [ ] Bellman-Ford algorithm
  - [ ] Prim's algorithm for MST
  - [ ] Strongly connected components (Tarjan's/Kosaraju's)
- [ ] **Advanced Dynamic Programming**
  - [ ] Edit distance (Levenshtein distance)
  - [ ] Optimal Binary Search Tree
  - [ ] Traveling Salesman Problem (TSP)
- [ ] **Machine Learning Algorithms**
  - [ ] K-Means clustering
  - [ ] Linear regression
  - [ ] Decision trees
- [ ] **Numerical Algorithms**
  - [ ] Fast Fourier Transform (FFT)
  - [ ] Matrix operations and decompositions
  - [ ] Root finding algorithms

### 🚀 Future Vision
- [ ] **Interactive Visualizations** - Web-based algorithm visualization tools
- [ ] **Performance Benchmarks** - Comprehensive time/space complexity analysis
- [ ] **Python Implementations** - Parallel implementations in Python
- [ ] **Documentation Website** - Detailed algorithm explanations with complexity analysis
- [ ] **Unit Testing Framework** - Comprehensive test coverage for all algorithms
- [ ] **API Development** - RESTful API for algorithm execution and analysis

---

## 🙏 Acknowledgements

### 🎓 Educational Resources
- **Introduction to Algorithms** by Cormen, Leiserson, Rivest, and Stein (CLRS)
- **Algorithm Design** by Jon Kleinberg and Éva Tardos
- **Competitive Programming** communities and online judges

### 🛠️ Tech Stack & Libraries
- **C++ Standard Template Library (STL)** for efficient data structures
- **GNU Compiler Collection (GCC)** for compilation
- **Git & GitHub** for version control and collaboration

### 🌟 Inspiration
Special thanks to the open-source community and algorithm enthusiasts who contribute to making computer science education accessible to everyone.

---

<div align="center">

**Made with ❤️ by [H0NEYP0T-466](https://github.com/H0NEYP0T-466)**

</div>