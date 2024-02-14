
# Simple Version Control System Supra

This project is a command-line tool called "Supra" designed to provide basic version control functionality similar to Git. Users can initialize a repository, add files to a staging area, and commit changes using commands like `supra init`, `supra add`, and `supra commit`. It's aimed at developers and individuals who need a simple and lightweight version control system for managing their projects.

Supra aims to provide a user-friendly interface for basic version control operations, making it suitable for beginners or those who prefer a simpler alternative to Git. It's especially useful for smaller projects or personal use cases where the overhead of Git might be unnecessary. However, it may not offer the same level of advanced features and scalability as Git, so it's important to consider the specific needs of the project before choosing Supra as a version control solution.

In Linux, you have a few options to add your executable to the system's PATH so that it can be accessed globally from the command line:

1. **Move the Executable to an Existing PATH Directory**:
    - First, compile your `supra` program as usual. Let's assume the compiled executable is named `supra`.
    - You can move the `supra` executable to a directory that is already included in your system's PATH. Common directories for user-installed executables include `/usr/local/bin` and `~/bin` (if it exists and is in your PATH).
    - For example, you can use the following command to move `supra` to `/usr/local/bin`:
        ```bash
        sudo mv supra /usr/local/bin
        ```


After performing the step, you can run `supra` from any directory in the terminal. To confirm that `supra` is in your PATH, you can run `echo $PATH` to see a list of directories that are included in your PATH.

