--title GNU/screen
--date 2017-08 FOSScon
--heading A Brief Introduction to GNU/screen
CC-BY-SA
--author by Bob Murphy 
---
* A systems administrator from New Jersey
---
* Desktop Linux user for about 20 years.
---

There will be no:
---
Cat pictures
---
Memes
---

This entire demonstration will be presented in glorious TEXT!


--bgcolor black



--newpage screen
--color green 
--huge GNU screen  
---
--color white 

  * A terminal multiplexer
---

  * Suprisingly useful  

---
  * Part of the GNU project

---
--newpage start
--color white
  * Start screen 
--color green
--beginoutput
screen -S name
--endoutput
---
--color white
  * Run application that you wish to use:  e.g. irssi
---
--color green
--beginoutput
ssh murph@192.168.4.233
--endoutput
--newpage reattach
--color white
If you "accidentally" lose your connection....
---

screen then detaches from the current session, but it keeps on running!  

The command that you started when you were in screen continues as if you were still there.
---


--color white
  * reatttach screen
---
--color green
--beginoutput
screen -r
--endoutput
---
--color white
You can see that your session has picked up right where you left off.

---
If you were to lose your connection, screen will allow you to not get cut off and have to start over, but you will be able to pick up as if nothing had happened.
---
--newpage install
--color white
  * How to install screen

---
Redhat/older Fedora
--color green
--beginoutput
yum install screen
--endoutput
---
--color white
Newer Fedora
--color green
--beginoutput
dnf install screen
--endoutput
---
--color white
Debian/Ubuntu/Mint
--color green
--beginoutput
sudo apt-get install screen
--endoutput
---
--color white
FreeBSD (and presumably the other BSD's)
--color green
--beginoutput
cd /usr/ports/sysutils/screen && make install clean
--endoutput
--color white
Then follow prompts.
Slack and SuSE both had screen in the default install.



--newpage control
--color white
  * How to control screen

---
--huge Control-a 

is the main modifier for the screen program.  
---

To use most of the functions of screen you must <ctrl a> and then use the command.
--newpage windows


---
--color white
  * You can create more than one window within your screen session
--color green
--beginoutput
<ctrl-a> <c>
--endoutput
--color white
This creates another "window" for you to use a new shell session in.
---
  
	* You can switch between sessions by number:
--color green 
--beginoutput
<ctrl-a> <#>
--endoutput
---
--color white
  * Or by browsing through them in sequence:  either forward or backward numerically.
--color green
--beginoutput
<ctrl-a> <n>  &  <ctrl-a> <p>
--endoutput
---
--color white
  * detach screen
---
--color green
--beginoutput
 <ctrl-a> <d>
--endoutput
---
--newpage split
--color white
  * Split screens
--color green
--beginoutput
<ctrl-a> <S>
--endoutput
---
--color white
  * Horizontal split screens (recent versions)
--color green
--beginoutput
<ctrl-a> <|>  (pipe)
--endoutput
---


---
--color white
  * Switch between screens
--color green
--beginoutput
<ctrl-a> <tab>
--endoutput
---
--color white
  * Eliminate a split window
--color green
--beginoutput
<ctrl-a> <X>
--endoutput

---
--newpage log
--color white
Other useful items
---
  * Log session
--color green
--beginoutput
<ctrl-a> <H>
--endoutput
---
--color white
  * Get a screenshot
--color green
--beginoutput
<ctrl-a> <h>
--endoutput
---
--newpage lock & list

--color white
  * Lock your screen session, requires the user's password to unlock
--color green
--beginoutput
<ctrl-a> <x>
--endoutput
---

--color white
  *  Get a list of all active screens, and choose between them
--color green
--beginoutput
<ctrl-a> <">
--endoutput

---
--color white
  * Name the current screen, so that the previous function is easy to read. 
--color green
--beginoutput
<ctrl-a> <A>
--endoutput
---

--color yellow
--newpage Cut and Paste
--color white
There is a cut and paste function within screen that allows the user to cut and paste between screen sessions, or from further up in the scrollback buffer than can be seen on the screen.
---
Copy mode

--color green
--beginoutput
<ctrl-a> <[>
--endoutput
---
--color white
Use the cursor keys to go the the beginning of what you'd like to copy.
Press space to begin marking
Go to the end of what you'd like to copy.
Press space again to place the text between the marks in the buffer.
--color green
---

--beginoutput
<ctrl-a> <]>
--endoutput

---
--color white
This places the selected text at the cursor location.

---

This function is handy for copying complex IDs when you are in an environment where you do not have easy mouse-based cut and paste available, such as a hardware console, ot a VMware console.

 
--newpage screenrc

--color white
*	You can also customize screen at runtime, either by default, or by selecting a screenrc file for configuration.
*	There are example configuration files at /etc/screenrc and /etc/etcscreenrc
*	You can do things like change keybindings, start screen sessions with specific programs, or define a hardline for status.
A sample screenrc file:

--color green
--beginoutput
screen -t  1 bash
screen -t "files" 2 mc
screen -t "perf" 3 top
screen -t "irc" 4 irssi
hardstatus alwayslastline
hardstatus string '%{= kG}[ %{G}%H %{g}][%= %{= kw}%?%-Lw%?%{r}(%{W}%n*%f%t%?(%u)%?%{r})%{w}%?%+Lw%?%?%= %{g}][%{B} %m-%d %{W}%c %{g}]'
~                                          
--endoutput
--color white
*	This configuration allows for 4 screen sessions, and a last line that gives status of all screen sessions, the hostname and the time and date.
--newpage questions
---
--color green
Sources:  	*screen man pages*
GNU (https://www.gnu.org/software/screen/manual/)

Linode (https://www.linode.com/docs/networking/ssh/using-gnu-screen-to-manage-persistent-terminal-sessions)	

aperiodic? (http://aperiodic.net/screen/man:default_key_bindings)
---

I welcome constructive comments and suggestions
--color white

To contact me:
--boldon
	Bob Murphy		murph@member.fsf.org	

	G+			plus.google.com/+murphnj

	Mastodon/GNUsocial	murph@noagendashow.com
--boldoff
---
--color white
--huge Questions?

Thank you
