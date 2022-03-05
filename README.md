# pause-command

Batch script in Windows/MS-DOS has a "pause" command, which basically pauses the script waiting for user's input. I used this command to run a few automated task and then pause for manual intervention before next automated tasks starts.

I missed this command in Linux. Though there is already `read -p` command to do this, it didn't work as expected in my script for some reason which I didn't dig in enough. Hence, I made this program as a hack to achieve same functionality.

### Installation:

Assuming `~/.local/bin` is in your environment PATH variable.

```
make install
```

### Running the command:

You can pass any string of your choice after `pause` as an command line argument.

```
pause "Please do something and press enter.."
```

This will pause the execution, displays the given message and waits till user presses Enter key.