# pause-command

Batch script in Windows/MS-DOS has a "pause" command, which basically pauses the script waiting for user's input. I used this command to run a few automated task and then pause for manual intervention before next automated tasks starts.

I missed this command in Linux. Though there is already `read -p` command to do this, it didn't work as expected in my script for some reason which I didn't dig in enough. Hence, I made this program as a hack to achieve similar functionality.

### Installation :

```
git clone git@github.com:savvysiddharth/pause-command.git
cd pause-command
sudo make install
```

### Running the command :

You can pass any string of your choice after `pause` as an command line argument in any of three ways mentioned below.

Command:
```
pause "Pausing the execution, do something.."
```
```
pause 'Pausing the execution, do something..'
```
```
pause Pausing the execution, do something..
```

Output:
```
Pausing the execution, do something..
```

This will pause the execution, displays the given message and waits till user presses `Enter` key.

You can also use this command without any argument. In this case it will print a default string to the terminal.

Command:
```
pause
```

Output:
```
Press enter key to continue..
```

### Example :

This can be used in shell scripts as follows:
```
# Perform some tasks with script
pause "Do some manual intervention.."
# Peform next tasks with script
```

This will also support C/C++ programs that uses `system("pause");` statements.