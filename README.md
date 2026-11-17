# C++ & Object-Oriented Programming (OOP) Repository

A structured repository covering C++ core fundamentals, Object-Oriented Programming (OOP) principles, and modular multi-file class designs.

---

## 📁 Repository Structure

### 1. `Basics/`
Foundational C++ concepts including memory, pointers, references, arrays, and standard strings:
- `hello.cpp`: Basic introductory program.
- `arrays.cpp`: Static arrays and size calculations.
- `strings.cpp`: String concatenation, length, and indexing.
- `Strings2.cpp`: Advanced string manipulation (`length`, `substr`, `find`, `compare`).
- `pointers.cpp`: Pointer declarations, dereferencing, and address manipulation.
- `refernce.cpp`: Dynamic memory allocation (`new`), pointers, and reference aliasing.

### 2. `Classes_and_Objects/`
Core object-oriented building blocks and class member mechanics:
- `methodInsideClass.cpp`: Defining methods directly inside a class body.
- `methodOutsideClass.cpp`: Passing class instances and defining functions outside classes.
- `constructors.cpp`: Default constructors and object initialization.
- `constructors2.cpp`: Constructors with initialization lists.
- `ConstructorOverloading.cpp`: Overloaded constructors (e.g. Rectangle default, square, parameterized).
- `deconstructor.cpp`: Destructor execution order and object lifecycle.
- `ThisPointer.cpp`: Resolving variable shadowing with the `this->` pointer.
- `StaticVariable.cpp`: Shared class-level static attributes.
- `StaticFunction.cpp`: Calling static member functions directly on classes (`ClassName::Function`).

### 3. `Abstraction/`
Encapsulation, data hiding, access control, and interface design:
- `getter&setter.cpp`: Private member encapsulation with public accessors and mutators.
- `smartthermostat.cpp`: Real-world encapsulation pattern with value validation and state logic.
- `pratice.cpp`: Class interface design defining contracts via getter/setter signatures.

### 4. `Inheritance/`
Class hierarchies, reusability, constructor chaining, and inheritance variants:
- `inheritence.cpp`: Core inheritance syntax (`Person` base class $\rightarrow$ `Student` derived class).
- `inheritence_singleLevel.cpp`: Single-level inheritance (`Animal` $\rightarrow$ `Dog`).
- `inheritence_MultiLevel.cpp`: Multi-level inheritance (`Animal` $\rightarrow$ `Mammal` $\rightarrow$ `Dog`).
- `inheritence_Multiple.cpp`: Multiple inheritance (`Printer` + `Scanner` $\rightarrow$ `AllInOneMachine`).
- `inheritence_hierarchical.cpp`: Hierarchical inheritance (`Shape` $\rightarrow$ `Circle`, `Rectangle`).
- `inheritence_hybrid.cpp`: Hybrid diamond inheritance resolved with `virtual` base inheritance.
- `interitence2.cpp`: Constructor and destructor invocation order in inheritance chains.

### 5. `Projects/`
Modular multi-file C++ programs separating header specifications (`.h`) from implementation (`.cpp`):
- `myProgram/`: `Student.h`, `Student.cpp`, and driver `main.cpp`.
- `species/`: `Species.h`, `Species.cpp`, and driver `main.cpp` for population modeling.

---

## 🛠️ How to Compile & Run

### Single File (e.g. Inheritance)
```bash
clang++ -std=c++17 Inheritance/inheritence.cpp -o Inheritance/inheritence
./Inheritance/inheritence
```

### Multi-File Project (e.g. Species)
```bash
clang++ -std=c++17 Projects/species/Species.cpp Projects/species/main.cpp -o Projects/species/species_app
./Projects/species/species_app
```
