[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/0tfmFB4V)
# EEE123 - Computer Programming for Engineers (Lab 2A)

## Make sure you've read and understand all the instructions in this readme file.

VIEW THIS FILE ONLY IN YOUR BROWSER (AT GITHUB) FOR BETTER READABILITY

### Instruction to students:
1. Your codes/program should be able to ask the user for 3 **INTEGRAL numbers** input:
    - <em>a</em>,
    - <em>b</em>, and
    - <em>c</em>
     
   which are from the quadratic equation <img src="https://latex.codecogs.com/svg.image?y=ax^{2}&plus;bx&plus;c" title="https://latex.codecogs.com/svg.image?y=ax^{2}+bx+c" />. Your codes/program then should be able to find the solution(s) when <img src="https://latex.codecogs.com/svg.image?y=0" title="https://latex.codecogs.com/svg.image?y=0" /> using the following formula:

   <img src="https://latex.codecogs.com/svg.latex?\Large&space;x=\frac{-b\pm\sqrt{b^2-4ac}}{2a}" title="\Large x=\frac{-b\pm\sqrt{b^2-4ac}}{2a}" />

   Where,

   <img src="https://latex.codecogs.com/svg.image?b^{2}-4ac" title="https://latex.codecogs.com/svg.image?b^{2}-4ac" /> is called discriminant.

   For if the discriminant is equal to:
    - **Positive** number: we'll get 2 real solutions. **Find these numbers** using the whole equation above and display on the terminal as in 4.
    - **Zero**: we'll get 2 similar real solutions. **Find these numbers** as above and display on the terminal as in 4.
    - **Negative** number: we'll get a pair of complex solutions. Do not proceed, simply cout "**Complex solutions**" to the terminal.

   Hint: Use "if (discriminant &gt;= 0)" and "if (discriminant &lt; 0)" to differentiate the real (non-complex) and the complex solutions.
2. Input from user, 3 **INTEGRAL numbers**.:
    - &lt;type&gt; a;&nbsp;&nbsp;&nbsp;&nbsp;(use **any name** and **data type** suitable),
    - &lt;type&gt; b;&nbsp;&nbsp;&nbsp;&nbsp;(use **any name** and **data type** suitable), and
    - &lt;type&gt; c;&nbsp;&nbsp;&nbsp;&nbsp;(use **any name** and **data type** suitable)
3. Function(s) that is/are required (feel free to add more functions if necessary):
    - &lt;type&gt; **checkdiscriminant**(&lt;type&gt; a, &lt;type&gt; b, &lt;type&gt; c) - To check for the discriminant value.
    - &lt;type&gt; **getplus**(&lt;type&gt; discriminant, &lt;type&gt; a, &lt;type&gt; b, &lt;type&gt; c) - To get the whole solution for when + in the <img src="https://latex.codecogs.com/svg.image?\pm&space;" title="https://latex.codecogs.com/svg.image?\pm " /> in the equation above.
    - &lt;type&gt; **getminus**(&lt;type&gt; discriminant, &lt;type&gt; a, &lt;type&gt; b, &lt;type&gt; c) - To get the whole solution for when - in the <img src="https://latex.codecogs.com/svg.image?\pm&space;" title="https://latex.codecogs.com/svg.image?\pm " /> in the equation above.

   For the function(s) above:
    - (**MUST**) Use the **exact function name** as shown.
    - (**MUST**) Use the **same order** for the input arguments as shown.
    - Use **data type** (i.e. return value) suitable for the function(s).

   For the input argument(s) of the function(s) above:
    - Use **any variable name** suitable for the argument(s).
    - Use **data type** suitable, according to what you've chosen in 2. above etc.
4. Example output on the terminal:\
{...}\
Complex solutions

   OR,

   {...}\
   Solution 1: -1.500\
   Solution 2: 2.000

   OR,

   {...}\
   Solution 1: 7.071\
   Solution 2: 7.071   
6. Marks:
    - There are **3** test files:
      - test1.cpp - for the checkdiscriminant() function (6 tests for 3 marks),
      - test2.cpp - for the getplus() function (6 tests for 3 marks), and
      - test3.cpp - for the getminus() function (6 tests for 3 marks)

      that will be executed by the GitHub Classroom Workflow to automatically grade your codes/program, for a **full marks of 9**. Your codes/program **must pass all the 6 tests** to qualify for the **3** marks **for each test file** i.e. you can get either 0, 3, 6, or 9 marks.

    - Your codes/program must be **free from any warning** - your final mark later will be deducted for the warnings.
7. Take note:
    - The repository by default, after you clone it, is not compilable due to a lot of missing things.
    - Use any required header file(s), e.g. &lt;iostream&gt;, &lt;math&gt;, etc.
    - Use the main.hpp file for your function(s) declaration stated in 3. above.
    - Any variable (including variable(s) described in 2.) needs to be declared inside the main(), or inside the function(s) that you created - **do not use global variables**.
    - You need to make sure that your codes/program **can be executed** by the GitHub Classroom Workflow, so that the auto-grading can be performed (observe for the **green tick** on the repository page).
    - **DO NOT DELETE OR EDIT** the other files/folder (i.e. LICENSE, Makefile, catch.hpp and the test file(s)).
    - This repository hasn't been configured in Visual Studio Code yet. Add the "-Wall" and "Wconversion" inside the tasks.json for debugging while you are on Visual Studio Code. Use only G++ compiler.
8. Before you commit for grading, make sure you have **editted/filled your details below and inside the main.cpp file**.
	
### Student's details:

Declaration: I have read all the instructions given to me above.

**Name**: Write your full-name here\
**USM Email**: abc123@student.usm.my\
**GitHub Username**: abc123\
**Matric No.**: 987654
