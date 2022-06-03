# Prog_S4_IMAC Lessons

## Level 1 : Setup the env : 
All good

## Level 2 : Functions basics : 
- Focus on making it working first then, optimize
- Some functions are better outside classes, so that you can reuse them later on
- Make classes that have purpose and not only getters/setters
- Structs to group data (cf. C++ 20 typo real good)
- Small functions are easier to comprehend and use than big 1k lines ones
- Optimize things that are repetitive
- Enums make your code more readable and cleaner
- Small steps are better to make big progress
- Inheritance or composition? Inheritence is not always the n1 option to consider and is sometimes more complicated

## Level 3 : Code basics : 
- std::vector: best container, performant and easy to work with
- Minimize dependencies: having to much dependencies can make code less readable and thus less clean making changes a nightmare
- Strong types: more concrete representation of variables and code, making it more readable and understandable, and also can prevent errors 
- Use libraries: code more efficiently, don't recreate what's already been created (and sometimes better)
- Range based loops: more readable equivalent to the traditional for loop operating over a range of values, such as all elements in a container.
- Testing: ensures all functions work properly and see all errors that can occur when users use the app
- Lambda function: convenient way of defining an anonymous function object right at the location where it's invoked or passed as an argument to a function
- Master your IDE: different shortcuts and tips
- std::optional: type to express wether you may have something or not
- Single source of truth: only store value in one location
- Code reviews: outside opinion of your code
- const: makes object variable not modifiable
- Documentation: make others understand your code
- Don't overfocus on performance: using libraries for heavy duty parts of your app and focus more of what you can write
- Git submodules: link specific libraries to your project
- STL algo: important ones: find and find_if, filter, Map, reduce
- assert: like tests but for developper, check if you have any errors in what you type only in debug mode
- auto: when variable type isn't obvious, make it implicit
- Debug vs Release: debug for dev release for prod
- Immediately invoked funcs: executes functions immediately afetr their creation
- Markdown: markup language (best readmes ever)
- Smart pointers: make your pointers less generic, more oriented towards what you want them to do
- std::function: type to store functions, makes it easy to pass function in arg of other functions
- Dependencay injections: adding more parameters to your functions
- Error handling: excepetions actually may help you out someday
- Git Pull Requests: get repo from GIT
- Advanced Git features: amend: commit without push, rebase: reapply commits on top of another base tip; stash: stash the changes in a dirty working directory away
- CMake: best way to execute properly your project
- Functional programming: more precise way of writing code
- Move semantics: copy and destroy
- The Rule of 5: if you have 5 specific member functions they all need to be written 
- State and Strategy: state is autonomous and strategy comes from outside the code
- std::variant: variable that is either int or float and can change throughout the execution of the code
- Cache and Branches:
- Multithreading: execute tasks of multiple processor threads
- Polymorphism: overloading functions
- Space out your code: format your code

## Level 4 : 
- Watch conferences: other way to add knowledge, cs50 from Harvard are the best ones (in my opinion) 
- Write libraries: writing generic code can turn into library, makes you wanna work "cleaner"
- The Command pattern: pattern similar to singleton but with more details and info on what yout want to do
- Dear ImGui: BEST GUI LIBRARY AND SO EASY TO USE (used it in IMACRun)
- Designated Initializers: provides a quick way of initialising specific elements in an array and a way of explicitly initialising struct members
- std::string and std::string_view: new type from c++17, it is a non-owning reference to either a const char* or a std::string (makes things like if its reference)
- Static site generators: generate websites on the fly like Doxygen for ducumentation
- Deleted functions: delete functions to prevent them from beeing used. This is mostly used to prevent a type from being copied
- Type erasure: nables you to use various concrete types through a single generic interface
- wasm and electron: powerful open source framework that allows development of cross-platform desktop GUI applications
- Scope guard: idea is to let the destructor of a guard object call a user specified cleanup action at the end of a scope (read: block), unless the scope guard is dismissed
- C++ casts: Aspecial operator that forces one data type to be converted into another
- Measuring performance: optimizing your code executions, you can use dofferent methods of benchmarking
- Precompiled Header: helps reducing compilation time of your project
- <random>: different functions to use random
- Linked lists: Horrible and not that useful
- Avoid dead code: why leave junk ?
- friend: the friend declaration appears in a class body and grants a function or another class access to private and protected members of the class where the friend declaration appears
- Pointers vs References: Pointers: A pointer is a variable that holds memory address of another variable. A pointer needs to be dereferenced with * operator to access the memory location it points to. 

References : A reference variable is an alias, that is, another name for an already existing variable. A reference, like a pointer, is also implemented by storing the address of an object. 
A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) with automatic indirection, i.e the compiler will apply the * operator for you. 
  
## Level 5 :
  
- Avoid nested namespaces: less namespace for the better to ensure good coprehension of the code ( having two functions named the same in different namespaces is bruh
- #if defined(): better syntax than #ifdef, easier to use with negative version
- Trailing return type: the return type of a function template cannot be generalized if the return type depends on the types of the function arguments
