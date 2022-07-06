## Problems

When I wrote `case-conversion.c`, I created a infinite while loop, which resulted in a extreme huge /var/log/syslog file.

the code is like:

```c
int main() {
    char ch;
    int again = 1;
    printf("Case-Convert is READY!\n");

    while(again) {
    	printf("Enter a character:\n");
	    scanf("%c", &ch);

	    if(ch >= 65 && ch <= 90) {
	        printf("You Enter: %c.\nit's low case: %c.\n", ch, ch + 32);
	        again = 0;
	        return 0;
	    } else if (ch >= 97 && ch <= 122) {
	        printf("You Enter: %c.\nIT'S UPPER CASE: %c.\n", ch, ch - 32);
	        again = 0;
	        return 0;
	    } else {
	        printf("Enter from 'a' to 'z' or 'A' to 'Z', Try again!\n");
	        return 0;
	    }
    }

}

``` 

It is meant to let user re-enter character if he just entered a invalid one. I thought `scanf` would pause the execution of program to wait for input. 

I tested several times entering invalid character and it continuously output "Enter from 'a' to 'z'..." and did not let me input.

I thougt maybe return to this one when I got more grasp of flow controlling. Later Unbutu told that the `syslog` took up 52G and there was 576MB space remained.

run command `tail /var/log/syslog` and saw something like this:

```
kenan@ywt:/var/log$ tail syslog
Jul  3 19:15:56 ywt org.gnome.Nautilus[15468]: Enter from 'a' to 'z' or 'A' to 'Z', Try again!
Jul  3 19:15:56 ywt org.gnome.Nautilus[15468]: Enter a character:
Jul  3 19:15:56 ywt org.gnome.Nautilus[15468]: Enter from 'a' to 'z' or 'A' to 'Z', Try again!
Jul  3 19:15:56 ywt org.gnome.Nautilus[15468]: Enter a character:
Jul  3 19:15:56 ywt org.gnome.Nautilus[15468]: Enter from 'a' to 'z' or 'A' to 'Z', Try again!
Jul  3 19:15:56 ywt org.gnome.Nautilus[15468]: Enter a character:
Jul  3 19:15:56 ywt org.gnome.Nautilus[15468]: Enter from 'a' to 'z' or 'A' to 'Z', Try again!

```

- I realised the syslog is filled with my prompt.

- tried to clear syslog and met Permisson Denied.

- finally this command helps: 

	- `sudo sh -c 'cat /dev/null > /var/log/syslog'`

	- `cat /dev/null > syslog` will clear `syslog`, however the `>` is running by your user not under `sudo`, so use `sh`'s `-c` option to make a whole command and run under `sudo`.

- got help from [this answer](https://askubuntu.com/questions/436051/i-cannot-clear-syslog-but-i-can-remove-it).


