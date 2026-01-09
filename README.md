A SYSTEM DEVELOPMENT LIFE CYCLE (SDLC) IMPLEMENTATION - SEN 201 ASSIGNMENT

REQUIREMENT ANALYSIS
Statement: This system is a Number Guessing Game you can use to relax after a rigorous day at work or school, or to test how lucky you really are
Functional Requirements: The user shall enter a random numerical value from a range of 1 to 100 as their guess
Target Audience: Everyone

SYSTEM DESIGN
Architechture: Single script
Nomenclature Table: 
    Variables
    *secret_number - the system shall pickout a random number between 1 and 100 (inclusive)
    *user_guess - the user shall pickout a random number between 1 and 100 (inclusive)
    *number_of_attemps - this variable shall record the number of attempted guesses for each round

IMPLEMENTATION
Environment & Language: Visual Studio Code (VSCode), C++
Version Control: Git was used to manage the source code history. Each major milestone was saved as a commit with a short descriptive message, the local repository was then syncronized to a remote repository on GitHub, ensuring data redundancy and allowing cloud-based deployment


TESTING AND QUALITY ASSURANCE
I performed manual testing and debugging to ensure game logic runs as expected
Test Case 1: I inputed 102, I expected "Out of range" message. Actual Result: PASSED
Test Case 2: I inputed ten wrong guesses, I expected secret number reveal and end-game. Actual Result: PASSED
Test Case 3: I inputed the correct guess, I expected "Congrats" message and total number of attempts. Actual Result: PASSED


DEPLOYMENT
Hosting: This project is delpoyed and hosted on GitHub
Repository Link: 'link'

MAINTEANCE AND KNOWN ISSUES
Out of Range Bug: Initially, the system did not filter numbers outside 1-100. This was fixed by adding a range-check conditional at the start of the loop.

Non-Integer Input: If a user enters letters or symbols, the std::cin buffer enters a fail state, causing an infinite loop.

Future Iterations: The next update will include an input sanitization to handle non-integer inputs error free