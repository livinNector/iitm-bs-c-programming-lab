# IITM BS - C programming lab

## Software requirements
- GNU Build essentials (build tools like gcc, gdb etc.)
- Python (for data generation)
- VS Code (Primary IDE)
- Git (for version control)
- Github Account and Github CLI (Optional if you want to save your changes your github account.)

## Note For Windows Users
- For windows the recommended way to follow this lab is using WSL(Windows Subsystem for Linux). 
  - Installing WSL
    - Open Powershell in windows.
    - Run `wsl --install`. This will install a Ubuntu subsystem in windows.
    - Restart your system after the installation.
  

## Setup and getting started
- Install VS code for your platform from [here](https://code.visualstudio.com/download#).
- Open the VS code.
- From `File->Open Folder`, create and open a new empty folder.
- Open Terminal in VS code ( ctrl+shift+` )
  - For windows users, open the Ubuntu terminal from the dropdown in the top right corner of the terminal called "Launch Profile...".
  - For Linux/Mac users, use your built-in or prefered shell.
- Clone either the original project repo or your fork of the repo to the current directory using `git clone` command in the terminal.
  ```
  git clone https://github.com/livinNector/iitm-bs-c-programming-lab .
  ```
  or
  ```
  git clone url_of_your_fork .
  ```
- Open Extensions in vscode.
  - Type `@recommended` in the search bar. It will show the following extensions.
  - Search and install the folowing extensions.
    - WSL (For windows users only) - This will enable opening folders in windows with vscode.
    - C/C++ 
    - Git Graph
- Install GNU Build Utils
    ```
    sudo apt-get update
    sudo apt-get install build-essential
    ```

## Getting used to the VS code interface

The Github CodeSpaces is like a virtual machine running on the cloud which you can access using a web browser. It is a linux system which is running on the cloud. 

Here you have:
- The Explorer (**Ctrl+Shift+E**)- where your can see your files. 
- The Terminal (**Ctrl+`**)- where your can run your commands like compiling and running the code.
- The Source control (**Ctrl+Shift+G**)- where your can commit and push your changes. (In simple terms it is like saving your version of the code)
- The Editor - where you can view and edit the contents of your files.

### Explorer

You can find the Explorer in the top left corner of the codespace or use the shortcut **Ctrl+Shift+E**.

Try the following:
- Create a new flie
- Create a new folder
- Delete the newly created files and folder.

### Source control

#### Github How-Tos

- Create a Github account: [Github signup](https://github.com/signup)
- Fork this repo: [How to Fork a repo](https://docs.github.com/en/get-started/quickstart/fork-a-repo#forking-a-repository)

#### The Git/GitHub lingo
- **Git** - A Source code versioning system with a command line tool.
- **GitHub** - A cloud service for managing source code.
- **Repo(Repository)** - A folder which has an inbuilt versioning system(simply speaking a folder with a .git subfolder with the version details.).
- **Repo in GitHub** - A **repo** present in the GitHub Cloud.
- **Fork** - A copy of a **repo** which is also present in GitHub.
- **Clone** - A copy of a **repo** in your local machine.
- **CodeSpaces** - A virtual machine with the **Clone** of your repo that you can access online or using visual studio code.
- **Remote** - The original repo in the GitHub from which you cloned the local copy.

#### Basic version control

- Staging - Selecting which changes to save in the local clone.
- Commiting - Saving the changes in the local clone.
- Pushing - Pushing the commits to the remote so that the changes are reflected in the GitHub.
- Pulling - Pulling the the commits from the remote to the local Clone.

**Try this:**  
- Create a file using the explorer.
- Go to Source control **Ctrl+Shift+G**, Stage the changes using the "+" icon near the file name.
- Enter a commit message in the message box above the commit button.
- Click the dropdown near the commit button and click commit and push.
- Now check the GitHub repo for the changes you pushed.

**Note:** To revert back any uncommited changes in your code, go to source control and click the discard changes icon.

**Reference:**  
- [How to commit and push your changes to the repo](https://docs.github.com/en/codespaces/developing-in-a-codespace/using-source-control-in-your-codespace#committing-your-changes)


### Terminal 

#### Basic Terminal commands
- pwd - prints the current working directory
- ls - list the files in the current working directory
- cd - change the current working directory.

#### Compiling and running a C source file in terminal
- Use cd to go to the directory where the the file.
```bash
cd path/to/the/source/file
```
- Compile the Code.
```bash
gcc source_file.c -o source_file
```

- Run the Compiled executable file.
```bash
./source_file
```

